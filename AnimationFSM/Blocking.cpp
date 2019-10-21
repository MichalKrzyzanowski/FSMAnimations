#include <Blocking.h>
#include <Moving.h>
#include <Idle.h>

#include <string>

void Blocking::idle(PlayerFSM* a)
{
	std::cout << "Blocking -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Blocking::moving(PlayerFSM* a)
{
	std::cout << "Blocking -> Moving" << std::endl;
	a->setCurrent(new Moving());
	delete this;
}