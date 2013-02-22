#ifndef RAMP_HALT_H
#define RAMP_HALT_H

#include "../CommandBase.h"

class RampHalt : public CommandBase {
public:
	RampHalt();
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
};
#endif
