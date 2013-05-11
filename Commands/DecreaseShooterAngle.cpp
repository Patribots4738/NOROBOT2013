#include "DecreaseShooterAngle.h"

DecreaseShooterAngle::DecreaseShooterAngle() {
	Requires(shooter);
}

// Called just before this Command runs the first time
void DecreaseShooterAngle::Initialize() {
	finished=false;
}

// Called repeatedly when this Command is scheduled to run
void DecreaseShooterAngle::Execute() {
	shooter->decreaseAngle();
}

// Make this return true when this Command no longer needs to run execute()
bool DecreaseShooterAngle::IsFinished() {
	return false;
}

// Called once after isFinished returns true
void DecreaseShooterAngle::End() {
	shooter->stopAngle();
	
}

// Called when another command which requires one or more of the same
// subsystems is scheduled to run
void DecreaseShooterAngle::Interrupted() {
	shooter->stopAngle();
}
