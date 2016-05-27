#pragma once

#include <functional>
#include <Windows.h>
#include <assert.h>

typedef std::function<void(WPARAM, KBDLLHOOKSTRUCT)> Keypressed_t;
typedef std::function<void(WPARAM, MSLLHOOKSTRUCT)> Mouse_t;

typedef void __cdecl setCallbacks_t(Keypressed_t& k, Mouse_t& m, HHOOK kh, HHOOK mh);

// see http://stackoverflow.com/questions/16016732/is-there-a-way-to-find-the-c-mangled-name-to-use-in-getprocaddress
inline FARPROC GetProcAddress_CppImpl(HMODULE h, const char* name, std::string const& Signature)
{
    // The signature of T appears twice in the signature of T GetProcAddress<T>(HMODULE, const char*)
    size_t len = Signature.find("@@YA");
    std::string templateParam = Signature.substr(0, len);
    std::string returnType = Signature.substr(len + 4);
    returnType.resize(templateParam.size()); // Strip off our own arguments (HMODULE and const char*)
    assert(templateParam == returnType);
    // templateParam and returnType are _pointers_ to functions (P6), so adjust to function type (Y)
    std::string funName = "?" + std::string(name) + "@@Y" + templateParam.substr(2);
    return ::GetProcAddress(h, funName.c_str());
}

template <typename T> inline
T GetProcAddress(HMODULE h, const char* name)
{
    // Get our own signature. We use `const char* name` to keep it simple.
    std::string Signature = __FUNCDNAME__ + 18; // Ignore prefix "??$GetProcAddress@"
    return reinterpret_cast<T>(GetProcAddress_CppImpl(h, name, Signature));
}
