#ifndef RAMP_INTAKE_H
#define RAMP_INTAKE_H

#include "../CommandBase.h"

class RampIntake : public CommandBase {
public:
	RampIntake(float x);
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
private:
	bool finished;
	float speed;
};
#endif
