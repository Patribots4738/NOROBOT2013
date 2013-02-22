#include "ServoReset.h"
#include "WPILib.h"

#define UPPER_BACK_POSITION 53
#define UPPER_PUSHED_POSITION 105
#define LOWER_BACK_POSITION 44
#define LOWER_PUSHED_POSITION 105
#define RAMP_BACK_POSITION 90
#define RAMP_PUSHED_POSITION 120

ServoReset::ServoReset(){
	Requires(delivery);
	Requires(intake);
	
	finished = false;
}

void ServoReset::Initialize(){
	//no initiation
}

void ServoReset::Execute(){
	delivery->upperDeliverySet(UPPER_BACK_POSITION);
	delivery->lowerDeliverySet(LOWER_BACK_POSITION);
	intake->rampLifterSet(RAMP_BACK_POSITION);
	finished= true;
}

bool ServoReset::IsFinished(){
	return finished;
}

void ServoReset::End(){
	//nothing
}

void ServoReset::Interrupted(){
	
}