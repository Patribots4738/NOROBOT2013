#include "Lift.h"
#include "../Robotmap.h"

Lift::Lift() : Subsystem("Lift") {
	Rwindowm = new Jaguar(RWINDOWM_PORT);
	Lwindowm = new Jaguar(LWINDOWM_PORT);
}

void Lift::InitDefaultCommand() {
	//no default commands
}

void Lift::singleMotorControl(bool right, bool raise) {
	if(right) {
		Rwindowm->Set((raise ? -1 : 1));
	} else {
		Lwindowm->Set((raise ? 1 : -1));
	}
}

void Lift::stopLifts() {
	Rwindowm->Set(0);
	Lwindowm->Set(0);
}

//to be incorporated later. currently serves
//no use. Eventually will have part in 
//determining whether or not manual overide
//is active
void Lift::setManual(bool set) {
	manual=set;
}

void Lift::stopSingleLift(bool right) {
	if(right) {
		Rwindowm->Set(0);
	} else {
		Lwindowm->Set(0);
	}
}