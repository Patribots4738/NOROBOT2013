#include "Delivery.h"
#include "../Robotmap.h"

Delivery::Delivery() : Subsystem("Delivery"){
	upperdelivery = new Servo(UPPER_DELIVERY);
	lowerdelivery = new Servo(LOWER_DELIVERY);
}

void Delivery::InitDefaultCommand() {
	//does nothing
}

void Delivery::lowerDeliverySet(float value){
	lowerdelivery->SetAngle(value);
}

void Delivery::upperDeliverySet(float value){
	upperdelivery->SetAngle(value);
}

void Delivery::updateStatus() {
	SmartDashboard::PutNumber("UpperServo", upperdelivery->GetAngle());
	SmartDashboard::PutNumber("LowerServo", lowerdelivery->GetAngle());
}