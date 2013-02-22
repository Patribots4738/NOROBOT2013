#include "OI.h"
#include "Commands/LiftRobot.h"
#include "Commands/LowerRobot.h"
#include "Commands/StopLift.h"
#include "Commands/DriveIndividualMotor.h"
#include "Commands/RampIntake.h"
#include "Commands/RampReject.h"
#include "Commands/RampHalt.h"
#include "Commands/MoveElevator.h"
#include "Commands/StopElevator.h"
#include "Commands/ElevatorUpUntilUpper.h"
#include "Commands/RampedRamp.h"
#include "Commands/Deliver.h"
#include "Commands/ElevatorUpUntilLower.h"
#include "Commands/RampLifter.h"

OI::OI() {
	//these controls are not final
	stick = new Joystick(2);
	xbox = new Joystick(1);
	
	//declaring XBOX controller buttons here
	xbox_rightbumper = new JoystickButton(xbox, 6);
	xbox_leftbumper = new JoystickButton(xbox, 5);
	xbox_A = new JoystickButton(xbox, 1);
	//Xbox controller map
	
	//intake mechanism
	xbox_rightbumper->WhenPressed(new RampedRamp());
	xbox_rightbumper->WhenReleased(new RampHalt());

	xbox_leftbumper->WhenPressed(new RampReject());
	xbox_leftbumper->WhenReleased(new RampHalt());
	
	xbox_A->WhenPressed(new RampLifter(RAMP_BACK));
	xbox_A->WhenReleased(new RampLifter(RAMP_PUSHED));
	
	//declaring JOYSTICK buttons here
	trigger=new JoystickButton(stick, 1);
	raiseSix = new JoystickButton(stick, 6);
	lowerSeven = new JoystickButton(stick, 7);
	lowerTen = new JoystickButton(stick, 10);
	raiseEleven = new JoystickButton(stick, 11);
	four = new JoystickButton(stick, 4);
	five = new JoystickButton(stick, 5);
	two = new JoystickButton(stick, 2);
	three = new JoystickButton(stick, 3);
	
	//create buttons to lift and lower the robot
	raiseSix->WhenPressed(new DriveIndividualMotor(false,false));
	raiseSix->WhenReleased(new StopLift());
	//add responses to the other button
	lowerSeven->WhenPressed(new DriveIndividualMotor(false,true));
	lowerSeven->WhenReleased(new StopLift());
	//code stuff whatever
	raiseEleven->WhenPressed(new DriveIndividualMotor(true,false));
	raiseEleven->WhenReleased(new StopLift);
	lowerTen->WhenPressed(new DriveIndividualMotor(true,true));
	lowerTen->WhenReleased(new StopLift());
	four->WhenPressed(new ElevatorUpUntilLower());
	five->WhenPressed(new ElevatorUpUntilUpper());
	
	
	//create buttons to raise and lower the elevator
	three->WhenPressed(new MoveElevator(ELEVATOR_UP));
	three->WhenReleased(new StopElevator());
	two->WhenPressed(new MoveElevator(ELEVATOR_DOWN));
	two->WhenReleased(new StopElevator());
	
	//Not sure about this part, should work
	//with the delivery system
	eight=new JoystickButton(stick, 9);
	nine=new JoystickButton(stick,8);
	eight->WhenPressed(new Deliver(true));
	nine->WhenPressed(new Deliver(false));
}

Joystick* OI::getJoystick() {
	return stick;
}

Joystick* OI::getXBox() {
	return xbox;
}
