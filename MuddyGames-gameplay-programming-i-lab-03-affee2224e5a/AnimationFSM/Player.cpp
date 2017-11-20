//@author: Michael Lyons
//Time taken: 6 hours
#include <iostream>
#include <Player.h>
#include <Idle.h>
#include <Debug.h>

Player::Player()
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
}

Player::Player(const AnimatedSprite& s) : m_animated_sprite(s)
{
	m_animation.setCurrent(new Idle());
	m_animation.setPrevious(new Idle());
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
		m_animation.idle();
		break;
	case Input::Action::CLIMB:
		m_animation.climbing();
		m_animated_sprite.addFrame(sf::IntRect(3, 173, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(88, 173, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(173, 173, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(258, 173, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(343, 173, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(428, 173, 84, 84));
		break;
	case Input::Action::DIG:
		m_animation.digging();
		m_animated_sprite.addFrame(sf::IntRect(3, 343, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(88, 343, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(173, 343, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(258, 343, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(343, 343, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(428, 343, 84, 84));
		break;
	case Input::Action::HAMMER:
		m_animation.hammering();
		m_animated_sprite.addFrame(sf::IntRect(3, 428, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(88, 428, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(173, 428, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(258, 428, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(343, 428, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(428, 428, 84, 84));
		break; 
	case Input::Action::JUMP:
		m_animation.jumping();
		m_animated_sprite.addFrame(sf::IntRect(3, 258, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(88, 258, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(173, 258, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(258, 258, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(343, 258, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(428, 258, 84, 84));
		break;
	case Input::Action::SWORD:
		m_animation.swordsmanship();
		m_animated_sprite.addFrame(sf::IntRect(3, 88, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(88, 88, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(173, 88, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(258, 88, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(343, 88, 84, 84));
		m_animated_sprite.addFrame(sf::IntRect(428, 88, 84, 84));
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