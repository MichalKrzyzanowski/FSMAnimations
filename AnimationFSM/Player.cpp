#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_state.setCurrent(new Idle());
	m_state.setPrevious(new Idle());
}

Player::~Player() {}

AnimatedSprite& Player::getAnimatedSprite()
{
	int frame = m_animated_sprite.getCurrentFrame();
	m_animated_sprite.setTextureRect(m_animated_sprite.getFrame(frame));
	return m_animated_sprite;
}

void Player::handleInput(Input in)
{
	DEBUG_MSG("Handle Input");

	switch (in.getCurrent())
	{
	case Input::Action::IDLE:
		//std::cout << "Player Idling" << std::endl;
		m_state.idle();
		break;
	case Input::Action::SPRINT:
		//std::cout << "Player Up" << std::endl;
		m_state.sprinting();
		break;
	case Input::Action::LEFT:
		//std::cout << "Player Left" << std::endl;
		m_state.moving();
		break;
	case Input::Action::RIGHT:
		//std::cout << "Player Idling" << std::endl;
		m_state.moving();
		break;
	case Input::Action::CROUCH:
		//std::cout << "Player Idling" << std::endl;
		m_state.crouching();
		break;
	case Input::Action::BLOCK:
		//std::cout << "Player Idling" << std::endl;
		m_state.blocking();
		break;
	case Input::Action::PRONE:
		//std::cout << "Player Idling" << std::endl;
		m_state.prone();
		break;
	default:
		break;
	}
}

void Player::update()
{
	//std::cout << "Handle Update" << std::endl;
	m_animated_sprite.update();
}

void Player::changeAnim(AnimatedSprite& t_animation)
{
	m_animated_sprite = t_animation;
}
