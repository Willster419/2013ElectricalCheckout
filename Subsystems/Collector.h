// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef COLLECTOR_H
#define COLLECTOR_H
#include "Commands/Subsystem.h"
#include "WPILib.h"
/**
 *
 *
 * @author ExampleAuthor
 */
class Collector: public Subsystem {
private:
	float WilliesSpeed4;
	float test1;
	// It's desirable that everything possible under private except
	// for methods that implement subsystem capabilities
public:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	SpeedController* collectorMotor;
	AnalogChannel* howManyDisks;
	DigitalInput* diskOnTheBed;
	AnalogChannel* upsideDown;
	Relay* spike1;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Collector();
	void InitDefaultCommand();
	void GetTheSensors();
	float GetSpeed();
	void SetSpikeFoward();
	void SetSpikeOff();
};
#endif
