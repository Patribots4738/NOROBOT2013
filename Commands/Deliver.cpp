#include "Deliver.h"
#include "WPILib.h"
#include "DeliveryKick.h"

Deliver::Deliver(bool upper) {
	AddSequential(new DeliveryKick(upper, true));
	AddSequential(new WaitCommand(.5));
	AddSequential(new DeliveryKick(upper, false));
}