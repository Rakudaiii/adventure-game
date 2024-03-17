#pragma once
#include "Player.h"
class Animation : public Player
{
public:
    void drawRight(const char** art, int size, int state);

    void drawLeft(const char** art, int size, int state);

    void drawUp(const char** art, int size, int state);

    void drawDown(const char** art, int size, int state);
    
    void gameStart()
    {
        
        while (gameOver)
        {
            int outGetch = _getch();
            if (outGetch == 27)
            {
                gameOver = false;
            }
            switch (outGetch)
            {
            case Player::State::UP:
                drawUp(down, sizeof(down) / sizeof(down[0]), outGetch);
                break;
            case Player::State::LEFT:
                drawLeft(left, sizeof(left) / sizeof(left[0]), outGetch);
                break;
            case Player::State::DOWN:
                drawDown(down, sizeof(down) / sizeof(down[0]), outGetch);
                break;
            case Player::State::RIGHT:
                drawRight(right, sizeof(right) / sizeof(right[0]), outGetch);
                break;
            }
        }
    }
    

private:
    bool gameOver = true;

    const char* right[5] = {
       "   O",
       "  /|\\__",
       "  \\|",
       "   |\\",
       "  /  \\"
    };
    const char* left[5] = {
   "   O",
   "__/|\\ ",
   "   |/  ",
   "  /|",
   " /  \\"
    };
    const char* down[5] = {
       "   O",
       "  /|\\",
       "   |",
       "   |",
       "  / \\"
    };


    const char* hite[5] = {
        "  O",
        " /|\\/",
        " \\|_______|",
        " /",
        "/"
    };
    static int bodyX;
    static int bodyY;
};

