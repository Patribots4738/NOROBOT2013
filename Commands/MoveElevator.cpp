#include "MoveElevator.h"
#include "WPILib.h"

MoveElevator::MoveElevator(bool up) {
	direction = up;
	finished=false;
	Requires(elevator);
}

void MoveElevator::Initialize() {
	//do nothing
}

void MoveElevator::End() {
	//do nothing
}

void MoveElevator::Execute() {
	if(direction) {
		elevator->lift();
	} else {
		elevator->lower();
	}
	finished=true;
}

bool MoveElevator::IsFinished() {
	return finished;
}

void MoveElevator::Interrupted() {
	//nothing here
}

