#pragma once
#include <string>
#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include "Window.hpp"
#include "World.hpp"
#include "Snake.hpp"
#include "Textbox.hpp"

class Game {
    public:
        Game();
        ~Game();

        void HandleInput();
        void Update();
        void Render();

        sf::Time GetElapsed();
        void RestartClock();

        Window* GetWindow();
    private:
        Window m_window;
        sf::Clock m_clock;
        float m_elapsed;

        World m_world;
        Snake m_snake;
        Textbox m_textbox;
};