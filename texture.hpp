#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>

class Texture
{
	private:

		const static short amount = 2;
	public:
		
		sf::Texture textures_pit[amount];
		Texture();
};
