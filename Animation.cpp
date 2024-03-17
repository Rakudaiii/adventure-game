#include "Animation.h"
int Animation::bodyX = 0;
int Animation::bodyY = 0;


void Animation::drawRight(const char** art, int size, int state)
{
    if (state == State::RIGHT)
    {
        system("cls");

        for (int i = 0; i < bodyY; ++i) // Изменено условие на увеличение
        {
            std::cout << std::endl;
        }

        for (int lineindex = 0; lineindex < size; ++lineindex)
        {
            for (int i = 0; i < bodyX; ++i)
            {
                std::cout << " ";
            }

            std::cout << art[lineindex] << std::endl;
        }

        Sleep(100);
        ++bodyX;
    }
}

void Animation::drawLeft(const char** art, int size, int state)
{
    if (state == State::LEFT)
    {
        system("cls");

        for (int i = 0; i < bodyY; ++i) // Изменено условие на увеличение
        {
            std::cout << std::endl;
        }

        for (int lineindex = 0; lineindex < size; ++lineindex)
        {
            for (int i = 0; i < bodyX; ++i)
            {
                std::cout << " ";
            }
            std::cout << art[lineindex] << std::endl;
        }

        Sleep(100);
        --bodyX;
    }
}

void Animation::drawUp(const char** art, int size, int state)
{
    if (state == State::UP)
    {
        system("cls");
        bodyY--;
        for (int i = 0; i < bodyY; ++i) // Изменено условие на увеличение
        {
            std::cout << std::endl;
        }

        for (int lineindex = 0; lineindex < size; ++lineindex)
        {
            for (int i = 0; i < bodyX; ++i)
            {
                std::cout << " ";
            }
            std::cout << art[lineindex] << std::endl;
        }

        Sleep(100);
    }
}

void Animation::drawDown(const char** art, int size, int state)
{
    if (state == State::DOWN)
    {
        system("cls");

        bodyY++;
        for (int i = 0; i < bodyY; ++i)
        {
            std::cout << std::endl;
        }

        for (int lineindex = 0; lineindex < size; ++lineindex)
        {
            for (int i = 0; i < bodyX; i++)
            {
                std::cout << " ";
            }
            std::cout << art[lineindex] << std::endl;
        }

        Sleep(100);
    }
}
