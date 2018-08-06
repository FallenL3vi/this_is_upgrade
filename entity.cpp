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
	sf::FloatRect boundingBox = sprite.getGlobalBounds();
	sf::Vector2f newPos = (offset * speed * loopTime) + sprite.getPosition();
	sf::Vector2f check_coll;
	check_coll.x = round(newPos.x/32);
       	check_coll.y = round(newPos.y/32);
	std::cout << "x: " << check_coll.x << std::endl;
	std::cout << "y: " << check_coll.y << std::endl;
	const short posTile = (check_coll.y * 10) + check_coll.x;
	std::cout << "Tile: " << posTile << std::endl;
	std::cout << "coll: " << referent.tiles[posTile].coll << std::endl;
	sf::FloatRect otherBox = referent.tiles[posTile].sprite.getGlobalBounds();

		if(referent.tiles[posTile].coll == 1)
		{
			if(!boundingBox.intersects(otherBox))
			{
			sprite.setPosition(newPos);
			}
			else
			{
			std::cout << "Collision" << std::endl;
			}
		}
		else
		{
			sprite.setPosition(newPos);
		}
}
