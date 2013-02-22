#ifndef RAMP_LIFTER_H
#define RAMP_LIFTER_H

#include "../CommandBase.h"

#define RAMP_PUSHED true
#define RAMP_BACK false

class RampLifter : public CommandBase {
public:
	RampLifter(bool position);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool m_position, finished;
};

#endif