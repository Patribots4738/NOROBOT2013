#ifndef STOP_ELEVATOR_H
#define STOP_ELEVATOR_H

#include "../CommandBase.h"

class StopElevator : public CommandBase {
public:
	StopElevator();
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
private:
	bool finished;
};
#endif
