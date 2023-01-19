#include "Game.hpp"

Game *game = nullptr;

int main()
{
    game = new Game();
    game->init("Ladorno Engine", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800, 600, false);

    while (game->running())
    {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return EXIT_SUCCESS;
}