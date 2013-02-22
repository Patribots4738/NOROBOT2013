#ifndef LIFT_ROBOT_H
#define LIFT_ROBOT_H

#include "../CommandBase.h"

class LiftRobot : public CommandBase {
public:
	LiftRobot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool completed;
};
#endif
