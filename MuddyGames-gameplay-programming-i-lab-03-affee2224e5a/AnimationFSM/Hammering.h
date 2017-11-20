//@author: Michael Lyons
//Time taken: 6 hours
#pragma once
#include "State.h"
class Hammering : public State
{
public:
	Hammering() {};
	~Hammering() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void digging(Animation* a);
	void swordsmanship(Animation* a);
	void climbing(Animation* a);

};

