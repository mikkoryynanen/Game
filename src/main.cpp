#include "Game.hpp"
#include <filesystem>

void modifyCurrentWorkingDirectory()
{
    while (!std::filesystem::exists("resources"))
    {
        std::filesystem::current_path(std::filesystem::current_path().parent_path());
    }
    auto cwd = std::filesystem::current_path();
}

int main()
{
    modifyCurrentWorkingDirectory();

    Game game(450, 800);
    game.run();

    return 0;
}

