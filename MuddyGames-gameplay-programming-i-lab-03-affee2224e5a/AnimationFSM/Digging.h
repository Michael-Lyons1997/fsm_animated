//@author: Michael Lyons
//Time taken: 6 hours
#pragma once
#include "State.h"
class Digging :public State
{
public:
	Digging() {};
	~Digging() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void swordsmanship(Animation* a);
	void hammering(Animation* a);
	void climbing(Animation* a);
};

