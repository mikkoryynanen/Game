#ifndef SFML_PROJECT_RENDERER_HPP
#define SFML_PROJECT_RENDERER_HPP

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Graphics/Sprite.hpp"
#include "SFML/Graphics/Texture.hpp"
#include "IRenderable.hpp"

class Renderer {
public:
    Renderer(int screenHeight, int screenWidth);
    void render();

    sf::RenderWindow& getWindow() { return this->window; }

    void addRenderable(const sf::Drawable& drawable)
    {
        renderQueue.push_back(&drawable);
    }

private:
    sf::RenderWindow window;
    std::vector<const sf::Drawable*> renderQueue;
};

#endif //SFML_PROJECT_RENDERER_HPP
