#include "Autonomous/autonMain.h"

namespace auton {
   void runAutonomous( gameInfo::allianceColor alliance, autonomousType autonType){
   
    printf("Auton time!\n");
    
    switch (autonType) {
        case autonomousType::Left:
            helper::printOnController("Auton: Left");
            printf("Left\n");
            runAutonLeft();
            break;
        case autonomousType::Right:
            helper::printOnController("Auton: Right");
            printf("Right\n");
            runAutonRight();
            break;
       
        case autonomousType::AutonSkills:
            helper::printOnController("Auton: AutonSkills");
            printf("AutonSkills\n");
            runAutonSkills();
            break;
        case autonomousType::Test:
            helper::printOnController("Auton: AutonSkills");
            printf("AutonSkills\n");
            runAutonTest();
        default:
            break;
    }
}

void runAutonLeft(){
    printf("runAutonLeft\n");
}
    void runAutonRight(){
    printf("runAutonRight\n");
}
     void runAutonSkills(){
       printf("runAutonSkills\n"); 
     }
     void runAutonTest(){
         printf("runAutonTest\n");  
     }

   
}
