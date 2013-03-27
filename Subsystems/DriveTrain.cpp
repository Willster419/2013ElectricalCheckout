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
#include "../OI.h"
#include "../Commands/DriveEncoders.h"
bool isInverted;
DriveTrain::DriveTrain() : Subsystem("DriveTrain") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	leftDrive = RobotMap::driveTrainLeftDrive;
	rightDrive = RobotMap::driveTrainRightDrive;
	robotDrive = RobotMap::driveTrainRobotDrive;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void DriveTrain::InitDefaultCommand() {
	//leftDrive->ChangeControlMode(CANJaguar::kPosition);
	//robotDrive->SetInvertedMotor(cANJaguar4, isInverted=true);
	leftDrive->SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	leftDrive->ConfigEncoderCodesPerRev(360);
	leftDrive->EnableControl();
	rightDrive->SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	rightDrive->ConfigEncoderCodesPerRev(360);
	rightDrive->EnableControl();
	printf ("the configuration for DRIVE is complete\n");
	//SetDefaultCommand(new DriveEncoders());
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
	//robotDrive->
}
void DriveTrain::ReportEncoders() {
	//leftDrive->GetControlMode();
	float encoder1 = leftDrive->GetPosition();
	float encoder2 = rightDrive->GetPosition();
	float voltage1 = leftDrive->GetOutputVoltage();
	float voltage2 = rightDrive->GetOutputVoltage();
	//printf ("drive encoder %f\n", encoder1);
	SmartDashboard::PutNumber( "Drive Encoder 1", (double)encoder1 );
	SmartDashboard::PutNumber( "Drive Encoder 2", (double)encoder2 );
	SmartDashboard::PutNumber( "Left DRIVE Voltage", (double)voltage1 );
	SmartDashboard::PutNumber( "Right DRIVE Voltage", (double)voltage2 );
}
