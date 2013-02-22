#include "ElevatorUpUntilLower.h"
#include "MoveElevator.h"
#include "StopElevator.h"
#include "WaitForLightDifference.h"

ElevatorUpUntilLower::ElevatorUpUntilLower() {
	AddSequential(new MoveElevator(ELEVATOR_UP));
	AddSequential(new WaitForLightDifference());
	AddSequential(new StopElevator());
}
