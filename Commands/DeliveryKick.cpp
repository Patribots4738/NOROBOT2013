#include "DeliveryKick.h"
#include "WPILib.h"

#define UPPER_BACK_POSITION 53
#define UPPER_PUSHED_POSITION 105
#define LOWER_BACK_POSITION 44
#define LOWER_PUSHED_POSITION 105

DeliveryKick::DeliveryKick(bool upper, bool kick):m_kick(kick), m_upper(upper) {
	Requires(delivery);
	finished=false;
}

void DeliveryKick::Initialize() {
	//no initialization
}

void DeliveryKick::Execute() {
	if(m_upper) {
		delivery->upperDeliverySet((m_kick ? UPPER_PUSHED_POSITION : UPPER_BACK_POSITION));
	} else {
		delivery->lowerDeliverySet((m_kick ? LOWER_PUSHED_POSITION : LOWER_BACK_POSITION));
	}
	finished=true;
}

bool DeliveryKick::IsFinished() {
	return finished;
}

void DeliveryKick::End() {
	//nothing
}

void DeliveryKick::Interrupted() {
	//nothing
}