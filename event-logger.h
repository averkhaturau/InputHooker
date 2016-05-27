#pragma once

#include "input-event.h"
#include <fstream>

class EventLogger
{
public:
    EventLogger(std::ostream& out): outstream(out) {}
    void log(InputDeviceEvent const& ie)
    {
        outstream << ie.time() << "\t" << ie.inputDevice() << "\t" << ie.description() << "\n";
    }
private:
    std::ostream& outstream;
};
