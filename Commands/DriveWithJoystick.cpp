#include "DriveWithJoystick.h"

DriveWithJoystick::DriveWithJoystick() {
	Requires(chassis);
}

void DriveWithJoystick::Initialize() {
	//initiation
}

void DriveWithJoystick::Execute() {
	chassis->driveWithJoystick(oi->getJoystick());
}

bool DriveWithJoystick::IsFinished() {
	return false;
}

void DriveWithJoystick::End() {
	//ending
}

void DriveWithJoystick::Interrupted() {
	//interruptions
}
