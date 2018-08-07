#pragma once
#include <chrono>
#include <thread>

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
		int TICK_RATE = 10;
		void draw();
		void update(float loopTime);
};
