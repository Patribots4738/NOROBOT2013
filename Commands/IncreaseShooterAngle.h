#ifndef INCREASE_SHOOTER_ANGLE_H
#define INCREASE_SHOOTER_ANGLE_H

#include "../CommandBase.h"

/**
 *
 *
 * @author ExampleAuthor
 */
class IncreaseShooterAngle: public CommandBase {
public:
	IncreaseShooterAngle();
	virtual void Initialize();
	virtual void Execute();
	virtual bool IsFinished();
	virtual void End();
	virtual void Interrupted();
private:
	bool finished;
};
#endif
