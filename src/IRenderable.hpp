//
// Created by Mikko Ryynänen on 14.11.2023.
//

#ifndef SFML_PROJECT_IRENDERABLE_HPP
#define SFML_PROJECT_IRENDERABLE_HPP

#include "SFML/Graphics/Texture.hpp"
#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/RenderWindow.hpp"

class IRenderable
{
public:
    const sf::Sprite& getSprite() const { return sprite; }

protected:
    sf::Texture texture;
    sf::Sprite sprite;

};

#endif //SFML_PROJECT_IRENDERABLE_HPP
