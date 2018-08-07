#pragma once
#include <SFML/Graphics.hpp>
#include <math.h>
#include <iostream>

class Map;

class Entity : public sf::Sprite
{
	private:
		float speed = 32;
		Map &referent;
	public:
		sf::Sprite sprite;	
		Entity(short X, short Y, sf::Texture &texture, Map &referent);
	
		void move(const sf::Vector2f &offset, float loopTime);
};
