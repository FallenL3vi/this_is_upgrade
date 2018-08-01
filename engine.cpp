#include "engine.hpp"


Engine::Engine()
: map("tutorial.txt")
{
	window.create(sf::VideoMode(600,480),"SDSD",sf::Style::Default);
	window.setFramerateLimit(60);
}

void Engine::start()
{
	sf::Event event;
	sf::Clock clock;

	while(window.isOpen())
	{
		sf::Time time = clock.restart();

		while(window.pollEvent(event))
		{
			if(event.type == sf::Event::Closed)
			{
				window.close();
			}
		}

		float loopTime = time.asSeconds();

		update(loopTime);
		draw();
	}
}

void Engine::draw()
{
	int a = 400;
	window.clear();
	for(int i = 0; i < a; i ++)
	{
	window.draw(map.entities[i]);
	}
	window.display();
}

void Engine::update(float loopTime)
{
}
