//
// Created by Mikko Ryynänen on 14.11.2023.
//

#include "GameObject.hpp"

#include <loguru.hpp>

GameObject::GameObject(const std::string &name, const std::string &filename)
    : name(name)
    {
        texture.loadFromFile(filename);

        sprite.setTexture(texture);
        sprite.setPosition(200, 150);
}

void GameObject::setPosition(const sf::Vector2f newPosition)
{
    position += newPosition;

    sprite.move(newPosition);

//    LOG_F(INFO, "new position x %f", sprite.getPosition().x);
}


