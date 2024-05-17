#include "Utility/robotInfo.h"


namespace botInfo {
    // Robot info
    double robotLengthIn = 25.5 * (1.0 / 2.0); // (1 inch / 2 holes)
    double halfRobotLengthIn = robotLengthIn / 2;

    double driveWheelRadiusIn = 3.00 / 2;
    double driveWheelCircumIn = 2 * M_PI * driveWheelRadiusIn;
    double driveWheelMotorGearRatio = (60.0 / 36.0);

   
    double driveMotorMaxRPM = 600.0;

   
}