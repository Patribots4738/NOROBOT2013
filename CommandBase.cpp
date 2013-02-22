#include "CommandBase.h"
#include "Subsystems/ExampleSubsystem.h"
#include "Commands/Scheduler.h"

CommandBase::CommandBase(const char *name) : Command(name) {
}

CommandBase::CommandBase() : Command() {
}

// Initialize a single static instance of all of your subsystems to NULL
ExampleSubsystem* CommandBase::examplesubsystem = NULL;
OI* CommandBase::oi = NULL;
Chassis* CommandBase::chassis = NULL;
Lift* CommandBase::lift = NULL;
Elevator* CommandBase::elevator = NULL;
Intake* CommandBase::intake = NULL;
Delivery* CommandBase::delivery = NULL;

void CommandBase::init() {
    // Create a single static instance of all of your subsystems. The following
	// line should be repeated for each subsystem in the project.
	examplesubsystem = new ExampleSubsystem();
	chassis = new Chassis();
	lift = new Lift();
	elevator = new Elevator();
	intake = new Intake();
	delivery = new Delivery();
	
	oi = new OI();
	
	SmartDashboard::PutData(chassis);
	SmartDashboard::PutData(lift);
	SmartDashboard::PutData(elevator);
	SmartDashboard::PutData(intake);
}
