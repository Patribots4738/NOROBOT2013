#include "RampLifter.h"
#include "WPILib.h"

#define RAMP_BACK_POSITION 70
#define RAMP_PUSHED_POSITION 40

RampLifter::RampLifter(bool position) : m_position(position){
	Requires(intake);
	finished=false;
}

void RampLifter::Initialize(){
	//no initiation
}

void RampLifter::Execute(){
	intake->rampLifterSet((m_position ? RAMP_PUSHED_POSITION : RAMP_BACK_POSITION));
	finished=true;
}

void RampLifter::End() {
	
}

bool RampLifter::IsFinished() {
	return finished;
}

void RampLifter::Interrupted() {
	
}
