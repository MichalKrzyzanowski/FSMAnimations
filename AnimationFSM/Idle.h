#ifndef IDLE_H
#define IDLE_H

#include <State.h>

class Idle : public State
{
public:
	Idle() {};
	~Idle() {};
	void handleInput();
	void update();
	void moving(PlayerFSM* a);
	void sprinting(PlayerFSM* a);
	void crouching(PlayerFSM* a);
	void blocking(PlayerFSM* a);
	void prone(PlayerFSM* a);
};

#endif // !IDLE_H