#include <Jumping.h>
#include "Swordsmanship.h"
#include "Digging.h"
#include "Hammering.h"
#include <Idle.h>

#include <string>

void Jumping::idle(Animation* a)
{
	std::cout << "Jumping -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Jumping::digging(Animation * a)
{
	std::cout << "Jumping -> digging" << std::endl;
	a->setCurrent(new Digging());
	delete this;
}
void Jumping::hammering(Animation * a)
{
	std::cout << "Jumping -> hammering" << std::endl;
	a->setCurrent(new Hammering());
	delete this;
}
void Jumping::swordsmanship(Animation * a)
{
	std::cout << "Jumping -> Swordsmanship" << std::endl;
	a->setCurrent(new Swordsmanship());
	delete this;
}