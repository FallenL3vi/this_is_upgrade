#pragma once
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "changesett.hpp"

class Engine
{

	public:;
		void start();
		sf::RenderWindow window;
		Engine();

	private:
		Settings settings;
		void draw();
		void update(float loopTime);
};
