#include "RampedRamp.h"
#include "WPILib.h"
#include "RampIntake.h"
#include "RampHalt.h"


RampedRamp::RampedRamp() {
	for(float i=0; i<=1; i+=.1) {
		AddSequential(new RampIntake(i));
		AddSequential(new WaitCommand(.1));
	};
}