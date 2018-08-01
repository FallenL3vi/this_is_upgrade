#pragma once
#include <fstream>
#include <string>
#include <SFML/Graphics.hpp>
#include <iostream>
#include <vector>
#include "entity.hpp"
#include "texture.hpp"

class Map
{
	private:
	
	public:
	
		const static short height = 20;
		const static short width = 20;
		
		Texture texture;

		std::vector <Entity> entities;

		Map(std::string map_name);
};
