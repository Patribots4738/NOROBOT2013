#include "StopElevator.h"
#include "WPILib.h"

StopElevator::StopElevator() {
	Requires(elevator);
	finished=false;
}

void StopElevator::Initialize() {
	//nothing
}

void StopElevator::End() {
	//nothing
}

void StopElevator::Execute() {
	elevator->stop();
	finished = true;
}

bool StopElevator::IsFinished() {
	return finished;
}

void StopElevator::Interrupted() {
	//nothing
}
