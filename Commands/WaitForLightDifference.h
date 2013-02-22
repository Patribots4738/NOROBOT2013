#ifndef WAIT_FOR_LIGHT_DIFFERENCE_H
#define WAIT_FOR_LIGHT_DIFFERENCE_H

#include "../Commandbase.h"

class WaitForLightDifference : public CommandBase {
public:
	WaitForLightDifference();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};

#endif