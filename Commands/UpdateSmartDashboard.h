#ifndef UPDATE_SMART_DASHBOARD_H
#define UPDATE_SMART_DASHBOARD_H

#include "../CommandBase.h"

class UpdateSmartDashboard : public  CommandBase {
	UpdateSmartDashboard();
	void Initialize();
	void Execute();
	bool IsFinished();
	void End();
	void Interrupted();
};
#endif
