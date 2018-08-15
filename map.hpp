#pragma once
#include "tile.hpp"
#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "texture.hpp"

class Map
{
	private:
		const static short MAP_HEIGHT = 20;
		const static short MAPP_WIDTH = 20;

	public:	
		Texture texture;
		
		std::vector <Tile> tiles;

		Map(std::string map_name);

		void update(float loopTime);
};
