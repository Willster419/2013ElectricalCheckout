// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "CollectFaster.h"
#include "../Subsystems/Collector.h"
CollectFaster::CollectFaster() {
	// Use requires() here to declare subsystem dependencies
	// eg. requires(chassis);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
	Requires(Robot::collector);
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=REQUIRES
}
// Called just before this Command runs the first time
void CollectFaster::Initialize() {
	Robot::collector->SetSpeed(Robot::collector->GetSpeed()+0.10);
	printf ("collector up=%f\n", Robot::collector->GetSpeed());
}
// Called repeatedly when this Command is scheduled to run
void CollectFaster::Execute() {
	RobotMap::collectorPacManFeeder->Set(Robot::collector->GetSpeed());
}
// Make this return true when this Command no longer needs to run execute()
bool CollectFaster::IsFinished() {
	return true;
}
// Called once after isFinished returns true
void CollectFaster::End() {
	
}
// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void CollectFaster::Interrupted() {
}
