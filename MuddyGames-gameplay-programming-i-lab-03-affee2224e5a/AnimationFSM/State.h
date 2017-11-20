//@author: Michael Lyons
//Time taken: 6 hours
#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <Animation.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(Animation* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void jumping(Animation* a)
	{
		DEBUG_MSG("State::Jumping");
	}
	virtual void climbing(Animation* a)
	{
		DEBUG_MSG("State::Climbing");
	}
	virtual void swordsmanshiping(Animation* a)
	{
		DEBUG_MSG("State::using a sword");
	}
	virtual void digging(Animation* a)
	{
		DEBUG_MSG("State::digging");
	}
	virtual void hammering(Animation* a)
	{
		DEBUG_MSG("State::hammering");
	}
};

#endif // ! ANIMATION_H

