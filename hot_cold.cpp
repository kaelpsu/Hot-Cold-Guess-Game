#include <iostream>
#include <array>

void printHelpMessage()
{
    std::cout << "Use: ./hot_cold [<valor_limite>]\n";
    std::cout << "===================================================\n";
    std::cout << "Welcome to the Hot-Cold Guess game, copyright 2020.\n";
    std::cout << "---------------------------------------------------\n";
    std::cout << "These are the game rules:\n";
    std::cout << "* I’ll choose a random number in [1,50]. Your job is to guess that number.\n";
    std::cout << "* From the second guess onward, I’ll tell you if your guess\n";
    std::cout << "is hot (closer than the previous guess) or cold (farther from\n";
    std::cout << "the previous guess).\n";
    std::cout << "* If you wish to quit the game, just type\n ;in a negative number.\n";
    std::cout << "Good luck!\n";
    std::cout << "----------------------------------------------------\n";
    std::cout << ">>> Guess the number: 35\n";
    std::cout << ">>> Nop, try again: 18\n";
    std::cout << ">>> Nop, it’s hot though, try again: 27\n";
    std::cout << ">>> Nop, it’s getting cold, try again: 21\n";
    std::cout << ">>> Nop, it’s hot though, try again: 22\n";
    std::cout << ">>> Yeah, correct guess!\n";
    std::cout << "Thanks for playing.\n";
}

int main(int argc, char *argv[])
{
    // constexpr std::array<size_t, n> a;
    int limit;

    if (argc == 1)
    {
        printHelpMessage();
    }
    else if (argc == 2)
    {
        limit = std::stoi(argv[1]);
    }
    else
    {
        std::cout << ">>> EXCESSIVE ARGUMENTS.\n";
        printHelpMessage();

        exit(1);
    }


    return 0;
}