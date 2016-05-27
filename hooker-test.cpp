#include "input-hooker.h"
#include <iostream>

#include "event-logger.h"



int main()
{
    try {
        EventLogger el(std::cout);

        InputHooker::instance().setHooks(
        [&el](WPARAM wparam, KBDLLHOOKSTRUCT kbsrtuct) {
            try {
                el.log(KeyboardEvent(wparam, kbsrtuct));
            } catch(std::exception const& ee) {std::cout << ee.what();}
        },
        [&el](WPARAM wparam, MSLLHOOKSTRUCT mstruct) {
            try {
                el.log(MouseAnyEvent(wparam, mstruct));
            } catch (std::exception const& ee) { std::cout << ee.what();}
        }
        );
        InputHooker::instance().startHook();

        MSG msg;
        while (GetMessage(&msg, NULL, 0, 0)) {
        }

    } catch (std::exception& ee) {
        std::cerr << "Exception thrown: " << ee.what();
    } catch (...) {
        std::cerr << "Exited due to unknown exception";
    }
    return 0;
}
