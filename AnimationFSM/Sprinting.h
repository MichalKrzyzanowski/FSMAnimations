#ifndef SPRINTING_H
#define SPRINTING_H

#include <State.h>

class Sprinting : public State
{
public:

	Sprinting() {};
	~Sprinting() {};
	void idle(PlayerFSM* a);
	void moving(PlayerFSM* a);
};

#endif // !IDLE_H