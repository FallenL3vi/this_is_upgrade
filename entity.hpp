#pragma once
#include <SFML/Graphics.hpp>

class Entity : public sf::Drawable 
{
	private:
	public:
	Entity(int i, int j, sf::Texture texture);
	sf::Sprite sprite;
	void move();
	
	virtual void draw(sf::RenderTarget& target, sf::RenderStates states) const;
};
