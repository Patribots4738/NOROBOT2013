#include "RampReject.h"

RampReject::RampReject() {
	Requires(intake);
}

void RampReject::Initialize() {
	//do nothign
}

void RampReject::Execute() {
	//test values until the right one is found
	//
	intake->runMotor(-.5);
}

bool RampReject::IsFinished() {
	return false;
}

void RampReject::End() {
	//no ending behavior
}

void RampReject::Interrupted() {
	intake->stopMotor();
}