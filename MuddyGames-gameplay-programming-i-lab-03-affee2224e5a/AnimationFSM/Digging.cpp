#include "Digging.h"
#include "Jumping.h"
#include "Swordsmanship.h"
#include "Hammering.h"
#include "Climbing.h"
#include "Idle.h"

void Digging::idle(Animation * a)
{
	std::cout << "Digging -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Digging::jumping(Animation * a)
{
	std::cout << "Digging -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Digging::swordsmanship(Animation * a)
{
	std::cout << "Digging -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}

void Digging::hammering(Animation * a)
{
	std::cout << "Digging -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Digging::climbing(Animation * a)
{
	std::cout << "Digging -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
