#include <Idle.h>
#include <Crouching.h>
#include <string>
#include <Prone.h>

void Crouching::idle(PlayerFSM* a)
{
	std::cout << "Crouching -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

void Crouching::prone(PlayerFSM* a)
{
	std::cout << "Crouching -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}