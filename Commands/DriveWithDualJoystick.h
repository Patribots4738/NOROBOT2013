#ifndef DRIVE_WITH_DUAL_JOYSTICK_H
#define DRIVE_WITH_DUAL_JOYSTICK_H

#include "../CommandBase.h"

class DriveWithDualJoystick : public CommandBase {
public:
	DriveWithDualJoystick();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
#endif
