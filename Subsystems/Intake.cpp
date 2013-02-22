#include "Intake.h"
#include "../Robotmap.h"

Intake::Intake() : Subsystem("Intake"){
	rampm = new Jaguar(RAMPM_PORT);
	ramplifter = new Servo(RAMP_LIFTER);
	m_active=false;
}

Servo* Intake::getServo() {
	return ramplifter;
}

void Intake::InitDefaultCommand() {
	//do nothing
}

void Intake::runMotor(float value) {
	rampm->Set(value);
}

void Intake::stopMotor() {
	rampm->StopMotor();
}

void Intake::rampLifterSet(float value){
	ramplifter->SetAngle(value);
}

bool Intake::getActive() {
	return m_active;
}

void Intake::setActive(bool active) {
	m_active=active;
}
void Intake::updateStatus() {
	SmartDashboard::PutNumber("Robot Lift Servo", ramplifter->GetAngle());
}