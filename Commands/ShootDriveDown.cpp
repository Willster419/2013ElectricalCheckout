// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ShootDriveDown.h"
#include "../Subsystems/Shooter.h"
ShootDriveDown::ShootDriveDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::shooter);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	//printf("ShootDriveDown constructor called\n");
}
// Called just before this Command runs the first time
void ShootDriveDown::Initialize() 
{
	Robot::shooter->SetSpeed(Robot::shooter->GetSpeed()-0.10);
	printf ("down=%f\n", Robot::shooter->GetSpeed());
	
}
// Called repeatedly when this Command is scheduled to run
void ShootDriveDown::Execute() {
//	RobotMap::shootermainShooter->Set(WilliesSpeed);
	RobotMap::shootermainShooter->Set(Robot::shooter->GetSpeed());
	//WilliesSpeed -= 0.20;
	//bool ShootDriveDown::IsFinished(true);
}
// Make this return true when this Command no longer needs to run execute()
bool ShootDriveDown::IsFinished() {
	//printf("ShootDriveDown IsFinished\n");
	return true;
}
// Called once after isFinished returns true
void ShootDriveDown::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ShootDriveDown::Interrupted() {
}
