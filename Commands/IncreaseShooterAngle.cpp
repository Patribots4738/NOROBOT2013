#include "IncreaseShooterAngle.h"

IncreaseShooterAngle::IncreaseShooterAngle() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void IncreaseShooterAngle::Initialize() {
	finished=false;
}

// Called repeatedly when this Command is scheduled to run
void IncreaseShooterAngle::Execute() {
	shooter->increaseAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool IncreaseShooterAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void IncreaseShooterAngle::End() {
	shooter->stopAngle();
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void IncreaseShooterAngle::Interrupted() {
	shooter->stopAngle();
}
