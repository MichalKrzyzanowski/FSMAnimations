#include <Idle.h>
#include <Crouching.h>
#include <Prone.h>
#include <string>

void Prone::idle(PlayerFSM* a)
{
	std::cout << "Prone -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}