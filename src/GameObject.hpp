//
// Created by Mikko Ryynänen on 14.11.2023.
//

#ifndef SFML_PROJECT_GAMEOBJECT_HPP
#define SFML_PROJECT_GAMEOBJECT_HPP

#include "IRenderable.hpp"
#include "IReceiveInput.hpp"
#include "SFML/Graphics/RenderWindow.hpp"

class GameObject : public IRenderable
{
public:
    explicit GameObject(const std::string& name, const std::string& filename);

    sf::Vector2f getPosition() const { return position; }
    void setPosition(sf::Vector2f newPosition);

protected:
    std::string name;
    sf::Vector2f position;
};

#endif //SFML_PROJECT_GAMEOBJECT_HPP
