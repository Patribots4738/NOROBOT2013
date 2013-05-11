#include "OI.h"

OI::OI() {
	//these controls are not final
	stick = new Joystick(2);
	xbox = new Joystick(1);
	
	//declaring XBOX controller buttons here
	xbox_rightbumper = new JoystickButton(xbox, 6);
	xbox_leftbumper = new JoystickButton(xbox, 5);
	xbox_A = new JoystickButton(xbox, 1);
	//Xbox controller map
	
	//declaring JOYSTICK buttons here
	trigger=new JoystickButton(stick, 1);
	raiseSix = new JoystickButton(stick, 6);
	lowerSeven = new JoystickButton(stick, 7);
	lowerTen = new JoystickButton(stick, 10);
	raiseEleven = new JoystickButton(stick, 11);
	four = new JoystickButton(stick, 4);
	five = new JoystickButton(stick, 5);
	two = new JoystickButton(stick, 2);
	three = new JoystickButton(stick, 3);
}

Joystick* OI::getJoystick() {
	return stick;
}

Joystick* OI::getXBox() {
	return xbox;
}
