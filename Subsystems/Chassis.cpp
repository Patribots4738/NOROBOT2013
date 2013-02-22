#include "Chassis.h"
#include "../Robotmap.h"
#include "../Commands/DriveWithDualJoystick.h"
#include <math.h>

Chassis::Chassis() : Subsystem("Chassis") {
	drive = new RobotDrive(2,1);
	drive->SetSafetyEnabled(false);
}

void Chassis::InitDefaultCommand() {
	SetDefaultCommand(new DriveWithDualJoystick());
}

void Chassis::goStraight() {
	drive->ArcadeDrive(1.0, 0.0);
}

void Chassis::turnLeft() {
	drive->ArcadeDrive(0.0,1.0);
}

void Chassis::tankDrive(Joystick* stick) {
	//2 is the left y axis, 5 is right axis
	float leftAxis = (stick->GetRawAxis(2) * -1);
	float rightAxis = (stick->GetRawAxis(5) * -1);
	//linear acceleration
	drive->TankDrive(leftAxis, rightAxis);
}

void Chassis::driveWithJoystick(Joystick* stick) {
	drive->ArcadeDrive(stick);
}
