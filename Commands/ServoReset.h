#ifndef SERVO_RESET_H
#define SERVO_RESET_H

#include "../CommandBase.h"

class ServoReset : public CommandBase {
public:
	ServoReset();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
	
private:
	bool finished;

};
#endif
