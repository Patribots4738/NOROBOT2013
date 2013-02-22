#ifndef INTAKE_H
#define INTAKE_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

class Intake : public Subsystem {
private:
	Jaguar *rampm;
	Servo *ramplifter;
	bool m_active;
public:
	Intake();
	void InitDefaultCommand();
	void runMotor(float value);
	void stopMotor();
	void rampLifterSet(float value);
	bool getActive();
	void setActive(bool active);
	void updateStatus();
	Servo* getServo();
};
#endif
