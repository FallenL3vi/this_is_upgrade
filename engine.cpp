#include "engine.hpp"


Engine::Engine()
: map("tutorial.txt")
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
		auto start = std::chrono::steady_clock::now();
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
		auto end = std::chrono::steady_clock::now();
		auto time_span = end-start;
		auto s = (1/TICK_RATE) - time_span.count();
		std::this_thread::sleep_for(std::chrono::seconds(s));
	}

}

void Engine::draw()
{
	window.clear();
	for(int i = 0; i < map.tiles.size(); i ++)
	{
	window.draw(map.tiles[i].sprite);
	}
	window.draw(map.entity.sprite);
	//window.draw(map.entities[0].sprite);
	window.display();
}

void Engine::update(float loopTime)
{
	map.update(loopTime);
}
