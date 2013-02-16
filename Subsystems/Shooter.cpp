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
#include "../Commands/ShooterSensors.h"
Shooter::Shooter() : Subsystem("Shooter") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	mainShooter = RobotMap::shootermainShooter;
	supportShooter = RobotMap::shootersupportShooter;
	lightSensor = RobotMap::shooterLightSensor;
	angleEncoder = RobotMap::shooterAngleEncoder;
	angleVictor = RobotMap::shooterAngleVictor;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	WilliesSpeed = 0.00;
	WilliesSpeed3 = 0.00;
}
    
void Shooter::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	mainShooter->SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	mainShooter->EnableControl();
	supportShooter->SetPositionReference(CANJaguar::kPosRef_QuadEncoder);
	supportShooter->EnableControl();
	printf ("the configuration for SHOOTAH is complete\n");
	RobotMap::shootermainShooter->Set(WilliesSpeed);
	RobotMap::shootersupportShooter->Set(WilliesSpeed);
	printf ("speeding at... %f\n", WilliesSpeed);
	printf ("angeling at... %f\n", WilliesSpeed3);
	RobotMap::shooterAngleVictor->Set(WilliesSpeed3);
	SetDefaultCommand(new ShooterSensors());
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
void Shooter::ReportSpeed()
{
	double encoderSpeed1 = mainShooter->GetPosition();
	double encoderSpeed2 = supportShooter->GetPosition();
	int lightInfo = lightSensor->Get();
	float analogEncoder = angleEncoder->GetVoltage();
	SmartDashboard::PutNumber("shooter encoder 1", (double) encoderSpeed1);
	SmartDashboard::PutNumber("shooter encoder 2", (double) encoderSpeed2);
	SmartDashboard::PutNumber("light is", lightInfo);
	SmartDashboard::PutNumber("arm encoder", (double)analogEncoder);
}
void Shooter::SetSpeedVic(float vicSpeed)
{
	WilliesSpeed3 = vicSpeed;
	angleVictor->Set( WilliesSpeed3 );
}
float Shooter::GetSpeedVic()
{
	return (WilliesSpeed3);
}
