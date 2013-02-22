#ifndef DELIVERY_H
#define DELIVERY_H


#include "Commands/Subsystem.h"
#include "WPILib.h"

class Delivery : public Subsystem{
private:
	Servo *upperdelivery, *lowerdelivery;
	
public:
	Delivery();
	void InitDefaultCommand();
	void lowerDeliverySet(float value);
	void upperDeliverySet(float value);
	void updateStatus();
};

#endif
