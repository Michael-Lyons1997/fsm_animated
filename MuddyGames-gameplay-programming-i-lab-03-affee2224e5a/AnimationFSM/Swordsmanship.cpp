//@author: Michael Lyons
//Time taken: 6 hours
#include "Swordsmanship.h"
#include "Jumping.h"
#include "Climbing.h"
#include "Digging.h"
#include "Hammering.h"
#include "Idle.h"

void Swordsmanship::idle(Animation * a)
{
	std::cout << "Swordsmanship -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Swordsmanship::jumping(Animation * a)
{
	std::cout << "Swordsmanship -> Jump" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}

void Swordsmanship::digging(Animation * a)
{
	std::cout << "Swordsmanship -> Digging" << std::endl;
	a->setCurrent(new Digging());
	delete this;
}

void Swordsmanship::hammering(Animation * a)
{
	std::cout << "Swordsmanship -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Swordsmanship::climbing(Animation * a)
{
	std::cout << "Swordsmanship -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}
