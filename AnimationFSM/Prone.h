#ifndef PRONE_H
#define PRONE_H

#include <State.h>

class Prone : public State
{
public:

	Prone() {};
	~Prone() {};
	void idle(PlayerFSM* a);
};

#endif // !IDLE_H