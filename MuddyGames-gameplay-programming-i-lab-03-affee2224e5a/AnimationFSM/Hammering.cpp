#include "Hammering.h"
#include "Jumping.h"
#include "Idle.h"

void Hammering::idle(Animation * a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
