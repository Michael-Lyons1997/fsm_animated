//@author: Michael Lyons
//Time taken: 6 hours
#pragma once
#include "State.h"
class Swordsmanship : public State
{
public:
	Swordsmanship() {};
	~Swordsmanship() {};
	void idle(Animation* a);
	void jumping(Animation* a);
	void digging(Animation* a);
	void hammering(Animation* a);
	void climbing(Animation* a);
};

