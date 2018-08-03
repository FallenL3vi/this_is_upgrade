#pragma once
#include <SFML/Graphics.hpp>

class Entity 
{
	private:
	public:
	Entity(int i, int j, sf::Texture &texture);
	sf::Sprite sprite;
	void move();
	
};
