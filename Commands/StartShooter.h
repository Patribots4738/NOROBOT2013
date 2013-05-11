#ifndef START_SHOOTER_H
#define START_SHOOTER_H

#include "../CommandBase.h"

class StartShooter: public CommandBase {
public:
	StartShooter();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool finished;
};
#endif
