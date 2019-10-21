#include <PlayerFSM.h>
#include <Idle.h>

PlayerFSM::PlayerFSM()
{
	m_current = new Idle();
}

PlayerFSM::~PlayerFSM() {}

void PlayerFSM::setCurrent(State* s)
{
	m_current = s;
}

State* PlayerFSM::getCurrent()
{
	return m_current;
}

void PlayerFSM::setPrevious(State* s)
{
	m_previous = s;
}

State* PlayerFSM::getPrevious()
{
	return m_previous;
}

void PlayerFSM::idle()
{
	m_current->idle(this);
}

void PlayerFSM::moving()
{
	m_current->moving(this);
}

void PlayerFSM::sprinting()
{
	m_current->sprinting(this);
}

void PlayerFSM::blocking()
{
	m_current->blocking(this);
}

void PlayerFSM::crouching()
{
	m_current->crouching(this);
}

void PlayerFSM::prone()
{
	m_current->prone(this);
}