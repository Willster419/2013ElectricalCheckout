// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#include "Collector.h"
#include "../Robotmap.h"
Collector::Collector() : Subsystem("Collector") {
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	collectorMotor = RobotMap::collectorCollectorMotor;
	howManyDisks = RobotMap::collectorHowManyDisks;
	diskOnTheBed = RobotMap::collectorDiskOnTheBed;
	upsideDown = RobotMap::collectorUpsideDown;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
}
    
void Collector::InitDefaultCommand() {
	// Set the default command for a subsystem here.
	//SetDefaultCommand(new MySpecialCommand());
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DEFAULT_COMMAND
}
// Put methods for controlling this subsystem
// here. Call these from Commands.
void Collector::GetTheSensors()
{
	float ShawnHazSwag = upsideDown->GetVoltage();
	float WillieHazSwag = diskOnTheBed->Get();
	float LolSwag = howManyDisks->GetVoltage();
	SmartDashboard::PutNumber("upside down", (double) ShawnHazSwag);
	SmartDashboard::PutNumber("disk on the bed", (double) WillieHazSwag);
	SmartDashboard::PutNumber("how many disks", (double) LolSwag);
}
