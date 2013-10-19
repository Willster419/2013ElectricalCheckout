// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "AngleCheckWithGyro.h"
#include "../Robotmap.h"
#include "../Commands/report_gyro.h"
#include "../Commands/DriveEncoders.h"
AngleCheckWithGyro::AngleCheckWithGyro() : Subsystem("AngleCheckWithGyro") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	gyro1 = RobotMap::angleCheckWithGyroGyro1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void AngleCheckWithGyro::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new report_gyro());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	//printf("the gyro has been reported\n");
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void AngleCheckWithGyro::readAndReportAngle() {
	
	printf("this feature has been disabled/n");
	//float angg = gyro1->GetAngle();
	//angg = angg +0.002;
	//SmartDashboard::PutNumber( "Gyro Angle", (double)angg );
	//printf ("gyro is %f\n", angg);
}
