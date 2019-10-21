#include <Idle.h>
#include <Crouching.h>
#include <string>

void Crouching::idle(PlayerFSM* a)
{
	std::cout << "Crouching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}