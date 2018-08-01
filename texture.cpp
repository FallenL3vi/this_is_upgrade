#include "texture.hpp"

Texture::Texture()
{
	std::string number;
	for(int i = 0; i < amount; i++)
	{
		number = std::to_string(i);
		if(!textures_pit[i].loadFromFile("textures/"+number+".png"))
		{
			std::cout << "Error missing texture" << number << std::endl;
		}
	}
}
