#include "Shooter.h"
#include "../Robotmap.h"

Shooter::Shooter() : Subsystem("Shooter") {
	shooter = new Jaguar(SHOOTER);
	shooterangle = new Jaguar(SHOOTER_ANGLE);
}

void Shooter::InitDefaultCommand() {
	//no default commands
}

void Shooter::runMotor() {
	
	shooter->Set(1);
}

void Shooter::stopMotor() {
	shooter->Set(0);
}

void Shooter::increaseAngle(){
	shooterangle->Set(1);
}

void Shooter::decreaseAngle(){
	shooterangle->Set(-1);
}

void Shooter::stopAngle(){
	shooterangle->Set(0);
}
