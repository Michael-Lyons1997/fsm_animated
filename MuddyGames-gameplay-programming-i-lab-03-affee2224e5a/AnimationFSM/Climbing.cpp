#include <Climbing.h>
#include "Digging.h"
#include "Hammering.h"
#include "Swordsmanship.h"
#include <Idle.h>

#include <string>

void Climbing::idle(Animation* a)
{
	std::cout << "Climbing -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Climbing::digging(Animation * a)
{
	std::cout << "Climbing -> Digging" << std::endl;
	a->setCurrent(new Digging());
	delete this;
}
void Climbing::hammering(Animation * a)
{
	std::cout << "Climbing -> Hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Climbing::swordsmanship(Animation * a)
{
	std::cout << "Climbing -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}