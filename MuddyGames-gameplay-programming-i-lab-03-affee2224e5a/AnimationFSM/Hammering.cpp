#include "Hammering.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Digging.h"
#include "Swordsmanship.h"
#include "Idle.h"

void Hammering::idle(Animation * a)
{
	std::cout << "Hammering -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Hammering::jumping(Animation * a)
{
	std::cout << "Hammering -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Hammering::digging(Animation * a)
{
	std::cout << "Hammering -> Digging" << std::endl;
	a->setCurrent(new Digging());
	delete this;
}

void Hammering::swordsmanship(Animation * a)
{
	std::cout << "Hammering -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}

void Hammering::climbing(Animation * a)
{
	std::cout << "Hammering -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
