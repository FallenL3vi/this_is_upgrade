#include "keyboard.hpp"

sf::Vector2f Keyboard::input()
{
	if(sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		return sf::Vector2f (-1.f,0.f);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		return sf::Vector2f (1.f,0.f);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		return sf::Vector2f (0.f,1.f);
	}
	else if(sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		return sf::Vector2f (0.f,-1.f);
	}
	else
	{
		return sf::Vector2f (0.f,0.f);
	}
}
