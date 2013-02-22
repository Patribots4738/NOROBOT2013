#ifndef OI_H
#define OI_H

#include "WPILib.h"

class OI {
private:
	Joystick* stick, *xbox;
	//joystick buttons
	JoystickButton *raiseSix, *lowerSeven, *lowerTen, *raiseEleven, *four, *five, *three, *two, *trigger, *eight, *nine;
	//xbox buttons
	JoystickButton *xbox_rightbumper, *xbox_leftbumper, *xbox_A;
public:
	OI();
	Joystick* getJoystick();
	Joystick* getXBox();
};

#endif
