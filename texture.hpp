#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <fstream>
#include <experimental/filesystem>
#include <unordered_map>

class Texture
{
	private:
	public:
		
		std::unordered_map<std::string, sf::Texture> textures;
		Texture();
};
