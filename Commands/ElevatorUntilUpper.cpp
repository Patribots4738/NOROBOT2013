#include "ElevatorUpUntilUpper.h"
#include "MoveElevator.h"
#include "StopElevator.h"
#include "WaitForUpperSensor.h"

ElevatorUpUntilUpper::ElevatorUpUntilUpper() {
	AddSequential(new MoveElevator(ELEVATOR_UP));
	AddSequential(new WaitForUpperSensor());
	AddSequential(new StopElevator());
}
