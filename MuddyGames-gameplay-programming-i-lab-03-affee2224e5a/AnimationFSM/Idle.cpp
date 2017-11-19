#include <Idle.h>
#include <Jumping.h>
#include <Climbing.h>
#include "Digging.h"
#include "Hammering.h"
#include "Swordsmanship.h"

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::jumping(Animation* a)
{
	std::cout << "Idle -> Jumping" << std::endl;
	a->setCurrent(new Jumping());
	delete this;
}
void Idle::climbing(Animation* a)
{
	std::cout << "Idle -> Climbing" << std::endl;
	a->setCurrent(new Climbing());
	delete this;
}

void Idle::digging(Animation * a)
{
	std::cout << "Idle -> Digging" << std::endl;
	a->setCurrent(new Digging());
	delete this;
}

void Idle::hammering(Animation * a)
{
	std::cout << "Idle -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}

void Idle::swordsmanshiping(Animation * a)
{
	std::cout << "Idle -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}
