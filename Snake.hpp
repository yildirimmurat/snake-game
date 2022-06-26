#pragma once
#include <SFML/Graphics.hpp>
#include "Textbox.hpp"
#include <vector>

struct SnakeSegment {
    SnakeSegment(int x, int y) : position(x, y){}
    sf::Vector2i position;
};

using SnakeContainer = std::vector<SnakeSegment>;
enum class Direction{ None, Up, Down, Left, Right };

class Snake {
    public: 
        Snake (int l_blockSize, Textbox* l_log);
        ~Snake();

        void SetDirection (Direction l_dir);
        Direction GetDirection();
        int GetSpeed();
        sf::Vector2i GetPosition();
        int GetLives();
        int GetScore();
        void IncreaseScore();
        bool HasLost();

        void Lose();
        void ToggleLost();

        Direction GetPhysicalDirection();

        void Extend();
        void Reset();

        void Move();
        void Tick();
        void Cut (int l_segments);
        void Render (sf::RenderWindow& l_window);
    private:
        void CheckCollision();

        SnakeContainer m_snakeBody;
        int m_size;
        Direction m_dir;
        int m_speed;
        int m_lives;
        int m_score;
        bool m_lost;
        sf::RectangleShape m_bodyRect;
        Textbox* m_log;
};