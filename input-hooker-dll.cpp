#include "input-hooker-dll.h"
#include <iostream>

Keypressed_t onKeyPressed;
Mouse_t onMouse;

HHOOK keyboardHook = NULL;
HHOOK mouseHook = NULL;

extern "C" __declspec(dllexport)
void __cdecl setCallbacks(Keypressed_t& k, Mouse_t& m, HHOOK kh, HHOOK mh)
{
    onKeyPressed = k;
    onMouse = m;
    keyboardHook = kh;
    mouseHook = mh;
}

__declspec(dllexport)
LRESULT __stdcall keyboardCallback(
    _In_ int    nCode,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
)
{
    if (nCode >= 0 && onKeyPressed) try {
            onKeyPressed(wParam, *reinterpret_cast<KBDLLHOOKSTRUCT*>(lParam));
        } catch (...) {/*too late to handle here*/}
    return CallNextHookEx(keyboardHook, nCode, wParam, lParam);
}

__declspec(dllexport)
LRESULT __stdcall mouseCallback(
    _In_ int    nCode,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam
)
{
    if (nCode >= 0 && onMouse) try {
            onMouse(wParam, *reinterpret_cast<MSLLHOOKSTRUCT*>(lParam));
        } catch (...) {/*too late to handle here*/ }
    return CallNextHookEx(mouseHook, nCode, wParam, lParam);
}
