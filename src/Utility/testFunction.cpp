#include "Utility/testFunction.h"
namespace testFunction {
    void inertialSensorCalibration(){
          // Calibrate the sensor (important to do this before using it)
        InertialSensor.calibrate();
        while(InertialSensor.isCalibrating()) {
        // Wait for the calibration to complete
        Brain.Screen.print("Calibration status: ");
        Brain.Screen.print(InertialSensor.isCalibrating());
        Brain.Screen.newLine();
        printf("Calibration status: %d \n", InertialSensor.isCalibrating());
        
         wait(100, msec);
         }
                
        
        
        
    }
    void inertialSensorShowYaw(){
        Brain.Screen.clearLine();
    double  yawAngle = InertialSensor.angle();
    Brain.Screen.print("Yaw Angle: %f degrees", yawAngle);
    printf("Yaw Angle: %f degrees \n", yawAngle);
    wait(100, msec);
    wait(100, msec);
    wait(100, msec);

    }
    void inertialSensorShowRoll(){
        Brain.Screen.clearLine();
    double  rollAngle = InertialSensor.roll();
    Brain.Screen.print("Roll Angle: %f degrees", rollAngle);
    printf("Roll Angle: %f degrees \n", rollAngle);
    wait(100, msec);
    wait(100, msec);

    }

    void inertialSensorShowAcceleration(){
    double xAxis = InertialSensor.acceleration(xaxis);
    double yAxis = InertialSensor.acceleration(yaxis);

    // Print the values to the Brain's screen
    Brain.Screen.clearLine();
    Brain.Screen.print("X-Axis: %f g, Y-Axis: %f g", xAxis, yAxis);
    printf("X-Axis: %f g, Y-Axis: %f g \n", xAxis, yAxis);
    wait(100, msec);
    }

    void LeftMotorsSpinForwardByVelocity(){
        LeftMotors.setVelocity(50,pct);
        LeftMotors.spin(forward);

        while(1){
        
        Brain.Screen.print("Left motor group spin forward: %f pct ", LeftMotors.velocity(pct));
        printf("Left motor group spin forward: %f pct \n", LeftMotors.velocity(pct));
        printf("Left motor group spin forward: %f rpm \n", LeftMotors.velocity(rpm));
        }
    }

     void LeftMotorsStopHold(){
        printf("Left motor group spin forward: %f rpm before hold \n", LeftMotors.velocity(rpm));
        printf("Left motor group spin forward: %f pct before hold \n", LeftMotors.velocity(pct));
        LeftMotors.stop(hold);
        
        printf("Left motor group stop hold\n");
    }

     void LeftMotorsStopBrake(){
        printf("Left motor group spin forward: %f rpm before brake \n", LeftMotors.velocity(rpm));
        printf("Left motor group spin forward: %f pct before hold \n", LeftMotors.velocity(pct));
        LeftMotors.stop(brake);
        
        printf("Left motor group stop brake \n");
    }

     void LeftMotorsStopCoast(){
        printf("Left motor group spin forward: %f pct before coast \n", LeftMotors.velocity(pct));
        LeftMotors.stop(coast);
        
        printf("Left motor group stop coast \n");
    }
    void RightMotorsSpinFowardByVelocity(){
        RightMotors.setVelocity(20,pct);
        RightMotors.spin(forward);
        Brain.Screen.print("Right motor group spin forward: %f pct ", RightMotors.velocity(pct));
        Brain.Screen.newLine();
    }
   
   
}