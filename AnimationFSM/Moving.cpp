#include <Moving.h>
#include <Sprinting.h>
#include <Idle.h>

#include <string>

void Moving::idle(PlayerFSM* a)
{
	std::cout << "Moving -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}
void Moving::sprinting(PlayerFSM* a)
{
	std::cout << "Moving -> Sprinting" << std::endl;
	a->setCurrent(new Sprinting());
	delete this;
}