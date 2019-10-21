#ifndef CROUCHING_H
#define CROUCHING_H

#include <State.h>

class Crouching : public State
{
public:

	Crouching() {};
	~Crouching() {};
	void idle(PlayerFSM* a);
};

#endif // !IDLE_H