//@author: Michael Lyons
//Time taken: 6 hours
#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void jumping(Animation* a);
	void climbing(Animation* a);
	void digging(Animation* a);
	void hammering(Animation* a);
	void swordsmanshiping(Animation* a);

};

#endif // !IDLE_H