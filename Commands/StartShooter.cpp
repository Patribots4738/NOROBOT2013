#include "StartShooter.h"

StartShooter::StartShooter() : CommandBase("StartShooter") {
	Requires(shooter);
}

// Called just before this Command runs the first time
void StartShooter::Initialize() {
	finished=false;
	
}

// Called repeatedly when this Command is scheduled to run
void StartShooter::Execute() {
	shooter->runMotor();
	finished=true;
}

// Make this return true when this Command no longer needs to run execute()
bool StartShooter::IsFinished() {
	return finished;
}

// Called once after isFinished returns true
void StartShooter::End() {
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void StartShooter::Interrupted() {
}
