#pragma once
#include "keyboard.hpp"
#include "tile.hpp"
#include "entity.hpp"
#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "texture.hpp"

class Map
{
	private:

	public:
		Keyboard keyboard;
	
		const static short height = 20;
		const static short width = 20;
		
		Texture texture;
		
		Entity entity;
		std::vector <Tile> tiles;

		Map(std::string map_name);

		void update(float loopTime);
};
