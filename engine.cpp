#include "engine.hpp"


Engine::Engine()
{
	window.create(sf::VideoMode(640,640),"SDSD",sf::Style::Default);
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
	window.clear(sf::Color::White);
	window.display();
}

void Engine::update(float loopTime)
{
}
