// RobotBuilder Version: 0.0.2
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in th future.
#ifndef OI_H
#define OI_H
#include "WPILib.h"
class OI {
private:
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
	Joystick* joystick;
	JoystickButton* collectSlow;
	JoystickButton* collectFast;
	JoystickButton* climberArmDown;
	JoystickButton* climberArmUp;
	JoystickButton* shooterAngleDown;
	JoystickButton* shooterAngleUp;
	JoystickButton* climberDown;
	JoystickButton* climberUp;
	JoystickButton* shooterDown;
	JoystickButton* shooterUp;
	JoystickButton* NetworkButton;
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=DECLARATIONS
public:
	OI();
	//float XValue;
	//float YValue;
	//float XValue2;
	//float YValue2;
	//Joystick* joystick;
	// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
	Joystick* getJoystick();
    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=PROTOTYPES
};
#endif
