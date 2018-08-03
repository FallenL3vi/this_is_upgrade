#include "map.hpp"

Map::Map(std::string map_name)
{
	char number;

	std::ifstream file;
	file.open("maps/"+map_name);

	if(!file.good())
	{
		std::cout << "Error couldn't load map" << std::endl;
	}
	
	for(short i = 0; i < height; i++)
	{
		for(short j = 0; j < width; j++)
		{
			file.get(number);
			switch(number)
			{
				case '1':
					{
						Entity entity(i,j,texture.textures_pit[1]);
						entities.push_back(entity);
						break;
					}
				case '0':
					{
						Entity entity(i,j,texture.textures_pit[0]);
						entities.push_back(entity);
						break;
					}
				default:
					{
						std::cout << "a" << std::endl;
					break;
				}
			}
		}
		file.get(number);
	}
	file.close();
}


