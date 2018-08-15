#include "texture.hpp"

Texture::Texture()
{
	std::string a;
	for(auto& p: std::experimental::filesystem::directory_iterator("textures"))
	{
		textures[p.path().string()] = sf::Texture();
		textures[p.path().string()].loadFromFile(p.path().string());
	}
}
