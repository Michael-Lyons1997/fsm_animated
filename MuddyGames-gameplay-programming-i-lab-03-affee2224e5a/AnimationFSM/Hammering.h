#pragma once
#include "State.h"
class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a);
	void jumping(Animation* a);
};

