#ifndef STOP_SHOOTER_H
#define STOP_SHOOTER_H

#include "../CommandBase.h"

class StopShooter: public CommandBase {
public:
	StopShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool finished;
};
#endif
