// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "DriveTrain.h"
#include "../Robotmap.h"
#include "../Commands/ArcadeDrive.h"
DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	cANJaguar1 = RobotMap::driveTrainCANJaguar1;
	cANJaguar2 = RobotMap::driveTrainCANJaguar2;
	robotDrive = RobotMap::driveTrainRobotDrive;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void DriveTrain::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
	SetDefaultCommand(new ArcadeDrive());
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void DriveTrain::Drive_with_joy( Joystick *stick ) {
	robotDrive->ArcadeDrive( stick );
}
void DriveTrain::Drive_with_abandon( void ) {
	float moveValue = (float)(rand())/(float)RAND_MAX;
	float rotateValue = 0.0;
	std::string keystring = "Arcade Speed";
	robotDrive->ArcadeDrive( moveValue, rotateValue );
	SmartDashboard::PutNumber( keystring, (double)moveValue);
}
void DriveTrain::Halt_drive( void ) {
	robotDrive->ArcadeDrive( 0.0, 0.0 );
}
