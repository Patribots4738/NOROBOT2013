#include "WaitForUpperSensor.h"

WaitForUpperSensor::WaitForUpperSensor() {
	Requires(elevator);
}

void WaitForUpperSensor::Initialize() {
	//no initialization
}

void WaitForUpperSensor::Execute() {
	//no execution
}

bool WaitForUpperSensor::IsFinished() {
	//this command only waits for the upper trigger
	//to be pressed.
	return elevator->getUpper();
}

void WaitForUpperSensor::End() {
	//no ending protocol
}

void WaitForUpperSensor::Interrupted() {
	//nothing here either
	//heresy
}
