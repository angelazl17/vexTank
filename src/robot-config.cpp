#include "vex.h"
using namespace vex;

// A global instance of brain used for printing to the V5 brain screen
brain Brain;

// Devices
controller Controller1(primary);

// Motors
motor LeftMotorA(PORT3, ratio6_1, false);
motor RightMotorA(PORT6, ratio6_1, false);
motor LeftMotorB(PORT11, ratio6_1, false);
motor RightMotorB(PORT20, ratio6_1, false);
motor LeftMotorC(PORT1, ratio6_1, false);
motor RightMotorC(PORT10, ratio6_1, false);
motor_group LeftMotors(LeftMotorA, LeftMotorB, LeftMotorC);
motor_group RightMotors(RightMotorA, RightMotorB, RightMotorC);

inertial InertialSensor(PORT8);


