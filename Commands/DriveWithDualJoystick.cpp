#include "DriveWithDualJoystick.h"

DriveWithDualJoystick::DriveWithDualJoystick() : CommandBase("DriveWithDualJoystick") {
	Requires(chassis);
}

void DriveWithDualJoystick::Initialize() {
	//initiation
}

void DriveWithDualJoystick::Execute() {
	chassis->tankDrive(oi->getXBox());
}

bool DriveWithDualJoystick::IsFinished() {
	return false;
}

void DriveWithDualJoystick::End() {
	//ending
}

void DriveWithDualJoystick::Interrupted() {
	//interruptions
}
