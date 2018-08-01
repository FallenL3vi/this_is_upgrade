#include "editor.hpp"

void Editor::menu()
{
	short butto = 0;

	std::cout << "1.New" << std::endl;
	std::cout << "2.Load" << std::endl;
	std::cout << "3.Exit" << std::endl;
	
	std::cin >> butto;
	std::cout << std::endl;	
	switch(butto)
	{
		case 1:
			{
				create();
				break;
			}
		case 2:
			{
				load();
				break;
			}
		default:
			break;
	}
}
void Editor::load()
{
}
void Editor::create()
{
	short height = 0;
	short width = 0;
	std::string name;
	std::cout << "Map name: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "Map height: ";
	std::cin >> height;
	std::cout << std::endl;
	std::cout << "Map width: ";
	std::cin >> width;
	std::cout << std::endl;
	//system("cls");
	
	static const short n_height = height;
	static const short n_width = width;

	int map[n_width][n_height];

	for(int i = 0; i < n_height; i++)
	{
		for(int j = 0; j < n_width; j++)
		{
			map[j][i] = 0;
		//	std::cout << map[j][i];
		}
		//std::cout << std::endl;
	}
	
	int x = 0;
	int y = 0;
	bool cont = true;
	while(cont)
	{
		for(int i = 0; i < n_height; i++)
		{
			for(int j = 0; j < n_width; j++)
			{
				if(i == y && j == x)
				{
					std::cout << "@";
				}
				else
				{
					std::cout << map[j][i];
				}
			}
			std::cout << std::endl;
		}
		std::cout << std::endl;

		char button = getchar();
		switch(button)
		{
			case 'a':
				{
					x--;
					break;
				}
			case 'd':
				{
					x++;
					break;
				}
			case 'w':
				{
					y--;
					break;
				}
			case 's':
				{
					y++;
					break;
				}
			case '0':
				{
					map[x][y] = 0;
					 break;
				}
			case '1':
				{
					map[x][y] = 1;
					break;
				}
			case '2':
				{
					map[x][y] = 2;
					break;
				}
			case '3':
				{
					map[x][y] = 3;
					break;
				}
			case '4':
				{
					map[x][y] = 4;
					break;
				}
			case '5':
				{
					map[x][y] = 5;
					break;
				}
			case '6':
				{
					map[x][y] = 6;
					break;
				}
			case '7':
				{
					map[x][y] = 7;
					break;
				}
			case '8':
				{
					map[x][y] = 8;
					break;
				}
			case '9':
				{
					map[x][y] = 9;
					break;
				}
			case 'e':
				{
					std::ofstream outfile(name);
					outfile << n_height << std::endl;
					outfile << n_width << std::endl;
					for(int i = 0; i < n_height; i ++)
					{
						for(int j = 0; j < n_width; j ++)
						{
							outfile << map[j][i];
						}
						outfile << std::endl;
					}
					cont = false;
					break;
				}

			default:
				break;
		}
	//	system("cls");
	}
}
