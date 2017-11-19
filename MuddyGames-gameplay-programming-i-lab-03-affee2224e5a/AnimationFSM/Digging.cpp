#include "Digging.h"
#include "Jumping.h"
#include "Idle.h"

void Digging::idle(Animation * a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Digging::jumping(Animation * a)
{
	std::cout << "Climbing -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
