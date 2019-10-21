#ifndef BLOCKING_H
#define BLOCKING_H

#include <State.h>

class Blocking : public State
{
public:

	Blocking() {};
	~Blocking() {};
	void idle(PlayerFSM* a);
	void moving(PlayerFSM* a);
};

#endif // !IDLE_H