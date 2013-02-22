#include "Elevator.h"
#include "../Robotmap.h"

Elevator::Elevator() : Subsystem("Elevator"){
	rvex = new Jaguar(RVEX_PORT);
	lvex = new Jaguar(LVEX_PORT);
	upperDetection = new DigitalInput(1);
	lowerDetection = new DigitalInput(2);
	lowerLight = new AnalogChannel(7);
	upperLight = new AnalogChannel(4);
}

void Elevator::lift() {
	rvex->Set(1);
	lvex->Set(-1);
}

void Elevator::lower() {
	rvex->Set(-1);
	lvex->Set(1);
}

void Elevator::stop() {
	rvex->Set(0.0);
	lvex->Set(0.0);
}

bool Elevator::getUpper() {
	return upperDetection->Get();
}

bool Elevator::getLower() {
	return lowerDetection->Get();
}

float Elevator::getUpperLightValue() {
	return upperLight->GetValue();
}

float Elevator::getLowerLightValue() {
	return lowerLight->GetValue();
}

void Elevator::InitDefaultCommand() {
	//do nothing
}

void Elevator::updateStatus() {
	SmartDashboard::PutBoolean("upperTrigger", getUpper());
	SmartDashboard::PutBoolean("LowerTrigger", getLower());
	SmartDashboard::PutNumber("Lower Light Sensor", lowerLight->GetValue());
	SmartDashboard::PutNumber("Upper Light Value", upperLight->GetValue());
}