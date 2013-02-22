#include "StopLift.h"

StopLift::StopLift() {
	Requires(lift);
	completed=false;
}

void StopLift::Initialize() {
	//no initiation
}

void StopLift::Execute() {
	lift->stopLifts();
	completed=true;
}

bool StopLift::IsFinished() {
	return completed;
}

void StopLift::End() {
	//no ending  needed
}

void StopLift::Interrupted() {
	//interruptions do not affect this task
}
