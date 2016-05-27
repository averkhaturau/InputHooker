#pragma once

#include <string>
#include <Windows.h>

class InputDeviceEvent
{
public:
    virtual DWORD time()const = 0;
    virtual std::string description()const = 0;
    virtual std::string inputDevice()const = 0;

    WPARAM eventType()const { return wparam; }
    virtual bool isRepeatable()const = 0;
protected:
    WPARAM wparam;
};


class MouseAnyEvent : public InputDeviceEvent
{
public:
    MouseAnyEvent(WPARAM wp, MSLLHOOKSTRUCT const& me);
    MouseAnyEvent(MouseAnyEvent const& a);
    MouseAnyEvent& operator =(MouseAnyEvent const& a);
    virtual DWORD time()const override;
    virtual std::string description()const override;
    virtual std::string inputDevice()const override;

    bool isRepeatable()const override;

    POINT mousePos()const {return eventData.pt;}

private:
    MSLLHOOKSTRUCT eventData;
};

class KeyboardEvent : public InputDeviceEvent
{
public:
    KeyboardEvent(WPARAM wp, KBDLLHOOKSTRUCT const& me);
    virtual DWORD time()const override;
    virtual std::string description()const override;
    virtual std::string inputDevice()const override;

    KeyboardEvent const deanonimized(bool showKeyCode = false) {anonimized = !showKeyCode; return *this;} // for shortcuts de-anonimization

    bool isRepeatable()const override;
private:
    KBDLLHOOKSTRUCT eventData;
    bool anonimized = true;
};
