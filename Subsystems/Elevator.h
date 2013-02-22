#ifndef ELEVATOR_H
#define ELEVATOR_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Elevator : public Subsystem {
private:
	Jaguar *rvex, *lvex;
	DigitalInput *upperDetection, *lowerDetection;
	AnalogChannel *lowerLight, *upperLight;
public:
	Elevator();
	void InitDefaultCommand();
	void lift();
	void lower();
	void stop();
	bool getUpper();
	bool getLower();
	float getUpperLightValue();
	float getLowerLightValue();
	void updateStatus();
};
#endif
