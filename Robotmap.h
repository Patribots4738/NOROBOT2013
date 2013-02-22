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
// #define LEFTMOTOR 1
// #define RIGHTMOTOR 2

// If you are using multiple modules, make sure to define both the port
// number and the module. For example you with a rangefinder:
// #define RANGE_FINDER_PORT 1
// #define RANGE_FINDER_MODULE 1

#define LWINDOWM_PORT 8
#define RWINDOWM_PORT 7
#define RVEX_PORT 4
#define LVEX_PORT 5
#define RAMPM_PORT 3
#define UPPER_DELIVERY 9
#define LOWER_DELIVERY 6
#define RAMP_LIFTER 10

#endif
