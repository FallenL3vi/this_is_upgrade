#include "tile.hpp"

Tile::Tile(int i, int j, sf::Texture &texture)
{
	sprite.setTexture(texture);
	sprite.setPosition(j*32,i*32);
}

