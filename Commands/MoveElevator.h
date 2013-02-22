#ifndef MOVE_ELEVATOR_H
#define MOVE_ELEVATOR_H
#define ELEVATOR_UP true
#define ELEVATOR_DOWN false

#include "../CommandBase.h"

class MoveElevator : public CommandBase {
public:
	MoveElevator(bool up);
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
private:
	bool direction, finished;
};

#endif
