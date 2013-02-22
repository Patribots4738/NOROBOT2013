#ifndef DELIVERY_KICK_H
#define DELIVERY_KICK_H

#include "../CommandBase.h"

class DeliveryKick : public CommandBase {
public:
	DeliveryKick(bool upper, bool kick);
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
private:
	bool finished;
	bool m_kick;
	bool m_upper;
};
#endif
