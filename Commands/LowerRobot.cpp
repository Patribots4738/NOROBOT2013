#include "LowerRobot.h"

LowerRobot::LowerRobot() {
	Requires(lift);
}

void LowerRobot::Initialize() {
	//no initialization needed
}

void LowerRobot::Execute() {
	//lower both racks
	lift->singleMotorControl(false, true);
	lift->singleMotorControl(true, true);
}

bool LowerRobot::IsFinished() {
	return false;
}

void LowerRobot::End() {
	//no ending needed
}

void LowerRobot::Interrupted() {
}
