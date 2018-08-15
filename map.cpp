#include "map.hpp"

Map::Map(std::string map_name)
{
	tiles.reserve(MAP_HEIGHT * MAP_WIDTH);
	char number;

	std::ifstream file;
	file.open("maps/"+map_name);

	if(!file.good())
	{
		std::cout << "Error couldn't load map" << std::endl;
	}
	
	for(short y = 0; y < MAP_HEIGHT; y++)
	{
		for(short x = 0; x < MAP_WDITH; x++)
		{
			file.get(number);
			switch(number)
			{
				case '1':
					{
						Tile tile(y,x,texture.textures[1]);
						title.coll = 1;
						tiles.push_back(tile);
						break;
					}
				case '0':
					{
						Tile tile(y,x,texture.textures[0]);
						tile.coll = 0;
						tiles.push_back(tile);
						break;
					}
				default:break;
			}
		}
		file.get(number);
	}
	file.close();
}

void Map::update(float loopTime)
{
}
