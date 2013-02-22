#include "WPILib.h"
#include "Commands/Command.h"
#include "Commands/ExampleCommand.h"
#include "Commands/ServoReset.h"
#include "CommandBase.h"

class CommandBasedRobot : public IterativeRobot {
private:
	Command *autonomousCommand, *resetCommand;
	LiveWindow *lw;
	
	virtual void RobotInit() {
		CommandBase::init();
		autonomousCommand = new ExampleCommand();
		resetCommand = new ServoReset();
		lw = LiveWindow::GetInstance();
		CommandBase::elevator->updateStatus();
		CommandBase::delivery->updateStatus();
	}
	
	virtual void AutonomousInit() {
		autonomousCommand->Start();
	}
	
	virtual void AutonomousPeriodic() {
		Scheduler::GetInstance()->Run();
	}
	
	virtual void TeleopInit() {
		// This makes sure that the autonomous stops running when
		// teleop starts running. If you want the autonomous to 
		// continue until interrupted by another command, remove
		// this line or comment it out.
		autonomousCommand->Cancel();
		//reset servos
		//uncomment later
		//resetCommand->Start();
		CommandBase::elevator->updateStatus();
		CommandBase::delivery->updateStatus();
		CommandBase::intake->updateStatus();
	}
	
	virtual void TeleopPeriodic() {
		Scheduler::GetInstance()->Run();
		CommandBase::elevator->updateStatus();
		CommandBase::delivery->updateStatus();
		CommandBase::intake->updateStatus();
		
	}
	
	virtual void TestPeriodic() {
		lw->Run();
		lw->AddActuator("Intake", "ramplifter", CommandBase::intake->getServo());
	}
};

START_ROBOT_CLASS(CommandBasedRobot);

