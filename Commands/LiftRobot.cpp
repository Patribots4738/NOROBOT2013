#include "LiftRobot.h"

LiftRobot::LiftRobot() {
	Requires(lift);
	completed=false;
}

void LiftRobot::Initialize() {
	//no initiation
}

void LiftRobot::Execute() {
	lift->singleMotorControl(true,false);
	lift->singleMotorControl(false,false);
	completed=true;
}

bool LiftRobot::IsFinished() {
	return completed;
}

void LiftRobot::End() {
	//ending
}

void LiftRobot::Interrupted() {
}
