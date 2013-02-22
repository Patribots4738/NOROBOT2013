#ifndef DRIVE_INDIVIDUAL_MOTOR_H
#define DRIVE_INDIVIDUAL_MOTOR_H

#include "../CommandBase.h"

class DriveIndividualMotor : public CommandBase {
public:
	DriveIndividualMotor(bool right, bool raise);
	void Initialize();
	void End();
	void Execute();
	bool IsFinished();
	void Interrupted();
private:
	bool right, raise;
};
#endif
