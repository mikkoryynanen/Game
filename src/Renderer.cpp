#include "Renderer.hpp"

#include <loguru.hpp>

Renderer::Renderer(const int screenHeight, const int screenWidth)
    : window(sf::VideoMode(screenWidth, screenHeight), "Game", sf::Style::Close)
    {
}

void Renderer::render()
{
    window.clear(sf::Color::Black);

    for (const auto& object : renderQueue)
    {
        window.draw(*object);
//       LOG_F(INFO, "Drawing at x %f", s.getPosition().x);
    }

    window.display();
}
