#ifndef DELIVER_H
#define DELIVER_H

#include "Commands/CommandGroup.h"
#define UPPER true
#define LOWER false

class Deliver : public CommandGroup {
public:
	Deliver(bool upper);
};
#endif