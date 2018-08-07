#include "entity.hpp"
#include "map.hpp"

Entity::Entity(short X, short Y, sf::Texture &texture, Map &_referent)
:	referent(_referent)
{
	sprite.setTexture(texture);
	sprite.setPosition(X*32,Y*32);
}

void Entity::move(const sf::Vector2f &offset, float loopTime)
{
	sf::Vector2f sprit = sprite.getPosition();
	std::cout << "offset :" << offset.x << " " << offset.y << std::endl;
	sf::Vector2f pos = offset * speed + sprit;
	std::cout << "future x :" << pos.x << "future y :" << pos.y << std::endl;
	sprit.x = pos.x/32;//round(pos.x/32);
	sprit.y = pos.y/32;//round(pos.y/32);
	
	int a = sprit.x + sprit.y * 20;

	std::cout << "Pos in vector : " << a << std::endl;
	std::cout << "Number of coll : " << referent.tiles[a].coll << std::endl;
	if(referent.tiles[a].coll == 1)
	{
	sprite.setPosition(pos);
	}


}
