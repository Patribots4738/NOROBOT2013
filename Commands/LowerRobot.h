#ifndef LOWER_ROBOT_H
#define LOWER_ROBOT_H

#include "../CommandBase.h"

class LowerRobot : public CommandBase {
public:
	LowerRobot();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
#endif
