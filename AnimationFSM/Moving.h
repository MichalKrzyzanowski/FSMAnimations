#ifndef MOVING_H
#define MOVING_H

#include <State.h>

class Moving : public State
{
public:
	Moving() {};
	~Moving() {};
	void idle(PlayerFSM* a);
	void sprinting(PlayerFSM* a);
};

#endif // !IDLE_H