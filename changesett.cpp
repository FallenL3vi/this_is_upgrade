#include "changesett.hpp"

void Settings::setSettings(sf::RenderWindow &window)
{
	window.setSize(sf::Vector2u(640,480));
	window.setTitle("Settings changed");
}
