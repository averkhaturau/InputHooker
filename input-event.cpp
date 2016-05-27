#include "input-event.h"
#include "keycodes.h"
#include "keycodes-anonimized.h"


MouseAnyEvent::MouseAnyEvent(WPARAM wp, MSLLHOOKSTRUCT const& me)
{
    wparam = wp;
    memcpy(&eventData, &me, sizeof(me));
}

MouseAnyEvent::MouseAnyEvent(MouseAnyEvent const& a)
{
    wparam = a.wparam;
    memcpy(&eventData, &a.eventData, sizeof(eventData));
}

MouseAnyEvent& MouseAnyEvent::operator=(MouseAnyEvent const& a)
{
    wparam = a.wparam;
    memcpy(&eventData, &a.eventData, sizeof(eventData)); return *this;
}

DWORD MouseAnyEvent::time() const
{
    return eventData.time;
}

std::string MouseAnyEvent::description() const
{
    switch (wparam) {
        case WM_LBUTTONDOWN:   return "left down"; break;
        case WM_LBUTTONUP:     return "left up"; break;
        case WM_LBUTTONDBLCLK: return "left dblclick"; break;
        case WM_MOUSEMOVE:     return "move"; break;
        case WM_MOUSEWHEEL:    return "wheel"; break;
        case WM_MOUSEHWHEEL:   return "h-wheel"; break;
        case WM_RBUTTONDOWN:   return "right down"; break;
        case WM_RBUTTONUP:     return "right up"; break;
        case WM_RBUTTONDBLCLK: return "right dblclick"; break;
        case WM_MBUTTONDOWN:   return "middle down"; break;
        case WM_MBUTTONUP:     return "middle up"; break;
        case WM_MBUTTONDBLCLK: return "middle dblclick"; break;
        case WM_XBUTTONDOWN:   return "X down"; break;
        case WM_XBUTTONUP:     return "X up"; break;
        case WM_XBUTTONDBLCLK: return "X dblclick"; break;
        default:               return "undefined action"; break;
    }
}

std::string MouseAnyEvent::inputDevice() const
{
    return "mouse";
}

bool MouseAnyEvent::isRepeatable() const
{
    return wparam == WM_MOUSEMOVE || wparam == WM_MOUSEWHEEL || wparam == WM_MOUSEHWHEEL;
}

KeyboardEvent::KeyboardEvent(WPARAM wp, KBDLLHOOKSTRUCT const& me)
{
    wparam = wp;
    memcpy(&eventData, &me, sizeof(me));
}

DWORD KeyboardEvent::time() const
{
    return eventData.time;
}

std::string KeyboardEvent::description() const
{
    return std::string() +
           (anonimized ?
            vKeyCodesAnonimized[eventData.vkCode % _countof(vKeyCodesAnonimized)] :
            vKeyCodes[eventData.vkCode % _countof(vKeyCodes)]) +
           " " + (wparam == WM_KEYDOWN || wparam == WM_SYSKEYDOWN ? "down " : "up ");
}

std::string KeyboardEvent::inputDevice() const
{
    return "keyboard";
}

bool KeyboardEvent::isRepeatable() const
{
    return false;
}
