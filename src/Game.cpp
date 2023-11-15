#include "Game.hpp"
#include "GameObject.hpp"


Game::Game(const int screenHeight, const int screenWidth)
    : renderer(screenWidth, screenWidth)
    {
        renderer.getWindow().setFramerateLimit(60);
}

void Game::run()
{
    // TODO Could maybe move this to a spawner class of some sorts
    GameObject player("Player", "resources/player.png");
    const float MOVEMENT_SPEED = 250.f;

    renderer.addRenderable(player.getSprite());

    sf::Clock clock;

    while (renderer.getWindow().isOpen())
    {
        sf::Event event;
        while (renderer.getWindow().pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
            {
                renderer.getWindow().close();
            }
        }

        sf::Time deltaClock = clock.restart();
        float deltaTime = deltaClock.asSeconds();

        // TODO Move to input manager
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        {
            player.setPosition(sf::Vector2f { -1.f * deltaTime * MOVEMENT_SPEED, 0.f });
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        {
            player.setPosition(sf::Vector2f { 1.f * deltaTime * MOVEMENT_SPEED, 0.f });
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        {
            player.setPosition(sf::Vector2f { 0.f, -1.f * deltaTime * MOVEMENT_SPEED});
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        {
            player.setPosition(sf::Vector2f { 0.f, 1.f * deltaTime * MOVEMENT_SPEED});
        }

        renderer.render();
    }
}
