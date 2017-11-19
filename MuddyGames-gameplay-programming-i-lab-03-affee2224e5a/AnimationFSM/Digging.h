#pragma once
#include "State.h"
class Digging :public State
{
public:
	Digging() {};
	~Digging() {};
	void idle(Animation* a);
	void jumping(Animation* a);
};

