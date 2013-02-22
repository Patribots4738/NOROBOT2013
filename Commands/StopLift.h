#ifndef STOP_LIFT_H
#define STOP_LIFT_H

#include "../CommandBase.h"

class StopLift : public CommandBase {
public:
	StopLift();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool completed;
};
#endif
