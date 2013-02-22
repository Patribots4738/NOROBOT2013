#include "RampHalt.h"

RampHalt::RampHalt() {
	Requires(intake);
}

void RampHalt::Initialize() {
	//do nothign
}

void RampHalt::Execute() {
	//test values until the right one is found
	//
	intake->runMotor(0);
}

bool RampHalt::IsFinished() {
	return false;
}

void RampHalt::End() {
	//no ending behavior
}

void RampHalt::Interrupted() {
	intake->stopMotor();
}
