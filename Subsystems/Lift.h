#ifndef LIFT_H
#define LIFT_H

#include "Commands/Subsystem.h"
#include "WPILib.h"

#define LIFT_RIGHT true
#define LIFT_LEFT false
#define LIFT_RAISE true
#define LIFT_LOWER false

class Lift : public Subsystem {
private:
	Jaguar *Rwindowm, *Lwindowm;
	bool manual;
public:
	Lift();
	void InitDefaultCommand();
	void stopLifts();
	void stopSingleLift(bool right);
	void setManual(bool set);
	//called to activate one motor at a time
	//true, true raises the right rack. False
	//false lowers the left rack. etc.
	void singleMotorControl(bool right, bool raise);
};
#endif
