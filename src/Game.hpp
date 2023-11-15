#ifndef SFML_PROJECT_GAME_HPP
#define SFML_PROJECT_GAME_HPP

#include "SFML/Graphics/RenderWindow.hpp"
#include "SFML/Window/Event.hpp"
#include "Renderer.hpp"

class Game {
public:
    Game(int screenHeight, int screenWidth);

    void run();

private:
    Renderer renderer;
};


#endif //SFML_PROJECT_GAME_HPP
