#include <Idle.h>
#include <Moving.h>
#include <Sprinting.h>
#include <Crouching.h>
#include <Blocking.h>
#include <Prone.h>

#include <string>

void Idle::handleInput() {}
void Idle::update() {}

void Idle::moving(PlayerFSM* a)
{
	std::cout << "Idle -> Moving" << std::endl;
	a->setCurrent(new Moving());
	delete this;
}

void Idle::sprinting(PlayerFSM* a)
{
	std::cout << "Idle -> Sprinting" << std::endl;
	a->setCurrent(new Sprinting());
	delete this;
}

void Idle::crouching(PlayerFSM* a)
{
	std::cout << "Idle -> Crouching" << std::endl;
	a->setCurrent(new Crouching());
	delete this;
}

void Idle::blocking(PlayerFSM* a)
{
	std::cout << "Idle -> Blocking" << std::endl;
	a->setCurrent(new Blocking());
	delete this;
}

void Idle::prone(PlayerFSM* a)
{
	std::cout << "Idle -> Prone" << std::endl;
	a->setCurrent(new Prone());
	delete this;
}