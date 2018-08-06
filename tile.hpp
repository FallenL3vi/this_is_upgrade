#pragma once
#include <SFML/Graphics.hpp>

class Tile 
{
	private:
	public:
	short coll = 0;
	Tile(int i, int j, sf::Texture &texture);
	sf::Sprite sprite;
};
