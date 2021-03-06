//@author: Michael Lyons
//Time taken: 6 hours
#ifndef CLIMBING_H
#define CLIMBING_H

#include <State.h>

class Climbing : public State
{
public:
	Climbing() {};
	~Climbing() {};
	void idle(Animation* a);
	void digging(Animation* a);
	void hammering(Animation* a);
	void swordsmanship(Animation* a);
};

#endif // !IDLE_H