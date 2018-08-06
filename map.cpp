#include "map.hpp"

Map::Map(std::string map_name)
: entity(1,1,texture.textures_pit[2],*this)
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
						Tile tile(i,j,texture.textures_pit[1]);
						tile.coll = 1;
						tiles.push_back(tile);
						break;
					}
				case '0':
					{
						Tile tile(i,j,texture.textures_pit[0]);
						tiles.push_back(tile);
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

void Map::update(float loopTime)
{
	entity.move(keyboard.input(),loopTime);
}
