#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <string>

#include "RandomGenerator.hpp"

class Game
{
private:
    struct ResultBC;      // Results of the guess (bulls & cows).

    static const std::string intro;

    bool gameoverMode;
    int gameoverLimit;

    int chosenNumber;
    int guessCounter;

    bool isCorrectNumber(int n);
    int getUserInput();
    ResultBC checkGuess(int g);

public:
    Game();

    void menu();
};

#endif // GAME_H_INCLUDED
