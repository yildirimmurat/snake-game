#include "Game.hpp"

int main() {

    Game game;
    while(!game.GetWindow()->IsDone()) {
        game.HandleInput();
        game.Update();
        game.Render();
        game.RestartClock();
    }

    return 0;
}