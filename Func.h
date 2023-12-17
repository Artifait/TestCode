#pragma once
#include <SFML/Graphics.hpp>

void Render(sf::RenderWindow& win, sf::CircleShape& circ)
{
	win.draw(circ);
}