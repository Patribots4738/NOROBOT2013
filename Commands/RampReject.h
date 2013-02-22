#ifndef RAMP_REJECT_H
#define RAMP_REJECT_H

#include "../CommandBase.h"

class RampReject : public CommandBase {
public:
	RampReject();
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
};
#endif
