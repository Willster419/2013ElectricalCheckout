// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Climber.h"
#include "../Robotmap.h"
Climber::Climber() : Subsystem("Climber") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	speedController1 = RobotMap::climberSpeedController1;
	speedController2 = RobotMap::climberSpeedController2;
	leftCIM = RobotMap::climberLeftCIM;
	rightCIM = RobotMap::climberRightCIM;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	climberSpeed = 0.00;
}
    
void Climber::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	RobotMap::climberLeftCIM->Set(climberSpeed);
	RobotMap::climberRightCIM->Set(climberSpeed);
	printf ("climbing at... %f\n", climberSpeed);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Climber::SetSpeed(float inSpeed2)
{
	climberSpeed = inSpeed2;
	leftCIM->Set(climberSpeed);
	rightCIM->Set(climberSpeed);
}
float Climber::GetSpeed()
{
	return (climberSpeed);
}
