#ifndef WAIT_FOR_UPPER_SENSOR_H
#define WAIT_FOR_UPPER_SENSOR_H

#include "../CommandBase.h"

class WaitForUpperSensor : public CommandBase {
public:
	WaitForUpperSensor();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
#endif
