#ifndef SHOOTER_H
#define SHOOTER_H

#include "../CommandBase.h"
#include "WPILib.h"

#define SHOOTER_LIFT true
#define SHOOTER_LIFT_RAISE true
#define SHOOTER_LIFT_LOWER false

class Shooter : public Subsystem {
public:
	Shooter();
	void InitDefaultCommand();
	void runMotor();
	void stopMotor();
	void increaseAngle();
	void decreaseAngle();
	void stopAngle();
private:
	Jaguar *shooter, *shooterangle;
	
};
#endif
