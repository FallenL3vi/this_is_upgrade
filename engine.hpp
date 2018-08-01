#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "map.hpp"

class Engine
{

	public:
		Map map;
		Texture texture;
		void start();
		sf::RenderWindow window;
		Engine();

	private:
		void draw();
		void update(float loopTime);
};
