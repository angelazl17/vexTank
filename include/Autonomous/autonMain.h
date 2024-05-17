#pragma once
#include <stdio.h>
#include "Utility/helper.h"

#include "Utility/gameInfo.h"
namespace auton {
enum autonomousType {
    Left,
    Right,
    AutonSkills,
    Test,
    None
};

    

    void runAutonLeft();
    void runAutonRight();
     void runAutonSkills();
     void runAutonTest();


/// @brief Run the autonomous set by setAutonRunType().
void runAutonomous( gameInfo::allianceColor alliance, autonomousType autonType);
}

