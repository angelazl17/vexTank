




#include "Utility/helper.h"

namespace helper {
    void printOnController(std::string message) {
        // Controller1.Screen.clearScreen();
        Controller1.Screen.clearLine(3);
        Controller1.Screen.setCursor(3, 1);
        Controller1.Screen.print(message.c_str());
    }
}