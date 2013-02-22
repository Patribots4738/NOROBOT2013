#include "RampIntake.h"
#include "WPILib.h"

RampIntake::RampIntake(float x) {
	Requires(intake);
	finished = false;
	speed=x;
}

void RampIntake::Initialize() {
	//do nothign
}

void RampIntake::Execute() {
		intake->runMotor(speed);
		finished=true;
}

bool RampIntake::IsFinished() {
	return finished;
}

void RampIntake::End() {
	//no ending behavior
}

void RampIntake::Interrupted() {
	intake->stopMotor();
}
