#include "DriveIndividualMotor.h"

DriveIndividualMotor::DriveIndividualMotor(bool _right, bool _raise) {
	Requires(lift);
	right=_right;
	raise=_raise;
}

void DriveIndividualMotor::Execute() {
	lift->singleMotorControl(right, raise);
}

void DriveIndividualMotor::Interrupted() {
}

void DriveIndividualMotor::End() {
	//nothign
}

void DriveIndividualMotor::Initialize() {
	//nothing
}

bool DriveIndividualMotor::IsFinished() {
	return false;
}
