// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "ClimbahDown.h"
#include "../Subsystems/Climber.h"
ClimbahDown::ClimbahDown() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void ClimbahDown::Initialize() {
	Robot::climber->SetArms(Robot::climber->GetArms()-0.10);
	printf ("climber down=%f\n", Robot::climber->GetArms());
}
// Called repeatedly when this Command is scheduled to run
void ClimbahDown::Execute() {
	RobotMap::climberSpeedController1->Set(Robot::climber->GetArms());
	RobotMap::climberSpeedController2->Set(Robot::climber->GetArms());
}
// Make this return true when this Command no longer needs to run execute()
bool ClimbahDown::IsFinished() {
	return true;
}
// Called once after isFinished returns true
void ClimbahDown::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void ClimbahDown::Interrupted() {
}
