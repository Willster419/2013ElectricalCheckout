// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Shooter.h"
#include "../Robotmap.h"
Shooter::Shooter() : Subsystem("Shooter") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	mainShooter = RobotMap::shootermainShooter;
	supportShooter = RobotMap::shootersupportShooter;
	wheelCounter = RobotMap::shooterWheelCounter;
	angleElevationJag = RobotMap::shooterAngleElevationJag;
	lightSensor = RobotMap::shooterLightSensor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	WilliesSpeed = 0.00;
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	
	RobotMap::shootermainShooter->Set(WilliesSpeed);
	RobotMap::shootersupportShooter->Set(WilliesSpeed);
	printf ("speeding at... %f\n", WilliesSpeed);
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
/*void Shooter::ShootTheDisk() {
	
	//Robot::shooter->ShootTheDisk();
	RobotMap::shootermainShooter->Set(WilliesSpeed);
}
*/
void Shooter::SetSpeed(float inSpeed)
{
	WilliesSpeed = inSpeed;
	mainShooter->Set( WilliesSpeed );
	supportShooter->Set( WilliesSpeed );
}
float Shooter::GetSpeed()
{
	return (WilliesSpeed);
}
