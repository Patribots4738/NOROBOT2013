#ifndef DELIVER_H
#define DELIVER_H

#include "Commands/CommandGroup.h"
#define DELIVER_UPPER true
#define DELIVER_LOWER false
#define DELIVER_KICK true
#define DELIVER_RETRACT false

class Deliver : public CommandGroup {
public:
	Deliver(bool upper);
};
#endif