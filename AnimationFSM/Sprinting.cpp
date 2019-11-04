#include <Sprinting.h>
#include <Moving.h>
#include <Idle.h>

#include <string>

void Sprinting::idle(PlayerFSM* a)
{
	std::cout << "Sprinting -> Idle" << std::endl;
	a->setCurrent(new Idle());
	delete this;
}

//void Sprinting::moving(PlayerFSM* a)
//{
//	std::cout << "Sprinting -> Moving" << std::endl;
//	a->setCurrent(new Moving());
//	delete this;
//}