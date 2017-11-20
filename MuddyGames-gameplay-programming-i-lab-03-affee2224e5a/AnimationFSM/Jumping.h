//@author: Michael Lyons
//Time taken: 6 hours
#ifndef JUMPING_H
#define JUMPING_H

#include <State.h>

class Jumping : public State
{
public:
	Jumping() {};
	~Jumping() {};
	void idle(Animation* a);
	void digging(Animation* a);
	void hammering(Animation* a);
	void swordsmanship(Animation* a);
};

#endif // !IDLE_H