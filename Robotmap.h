#ifndef ROBOTMAP_H
#define ROBOTMAP_H


/**
 * The RobotMap is a mapping from the ports sensors and actuators are wired into
 * to a variable name. This provides flexibility changing wiring, makes checking
 * the wiring easier and significantly reduces the number of magic numbers
 * floating around.
 */
 
// For example to map the left and right motors, you could define the
// following variables to use with your drivetrain subsystem.
 #define LEFTMOTOR 2
 #define RIGHTMOTOR 3

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

#define LWINDOWM_PORT 8
#define RWINDOWM_PORT 7
#define RVEX_PORT 22//originally 4, needed to change number for SHOOTER_ANGLE
#define LVEX_PORT 5
#define RAMPM_PORT 3
#define UPPER_DELIVERY 9
#define LOWER_DELIVERY 6
#define RAMP_LIFTER 10
#define SHOOTER 1
#define SHOOTER_ANGLE 4

//digital IO
#define UPPER_TOUCH_DETECTOR 1
#define LOWER_TOUCH_DETECTOR 2

//analog IO
#define LOWER_LIGHT_DETECTOR 7
#define UPPER_LIGHT_DETECTOR 4

//XBOX control inputs
#define LEFT_Y_AXIS 2
#define RIGHT_Y_AXIS 5

#endif
