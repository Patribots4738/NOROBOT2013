#ifndef DECREASE_SHOOTER_ANGLE_H
#define DECREASE_SHOOTER_ANGLE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class DecreaseShooterAngle: public CommandBase {
public:
	DecreaseShooterAngle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool finished;
};

#endif
