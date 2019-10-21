#ifndef STATE_H
#define STATE_H

#include <iostream>
#include <typeinfo>

#include <Input.h>
#include <PlayerFSM.h>
#include <Debug.h>

class State
{
public:
	virtual void handleInput() {}

	virtual void update() {}

	virtual void idle(PlayerFSM* a)
	{
		DEBUG_MSG("State::Idling");
	}
	virtual void moving(PlayerFSM* a)
	{
		DEBUG_MSG("State::moving");
	}
	virtual void sprinting(PlayerFSM* a)
	{
		DEBUG_MSG("State::sprinting");
	}
	virtual void crouching(PlayerFSM* a)
	{
		DEBUG_MSG("State::crouching");
	}
	virtual void prone(PlayerFSM* a)
	{
		DEBUG_MSG("State::prone");
	}
	virtual void blocking(PlayerFSM* a)
	{
		DEBUG_MSG("State::blocking");
	}
};

#endif // ! ANIMATION_H

