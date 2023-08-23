#include <iostream>
#include <array>

void printHelpMessage()
{
    std::cout << "Use: ./hot_cold [<valor_limite>]\n";
    std::cout << "===================================================\n";
    std::cout << "Welcome to the Hot-Cold Guess game, copyright 2020.\n";
}

void printStartMessage(short limit)
{
    std::cout << "---------------------------------------------------\n";
    std::cout << "These are the game rules:\n";
    std::cout << "* I’ll choose a random number in [1," << limit << "]. Your job is to guess that number.\n";
    std::cout << "* From the second guess onward, I’ll tell you if your guess\n";
    std::cout << "is hot (closer than the previous guess) or cold (farther from\n";
    std::cout << "the previous guess).\n";
    std::cout << "* If you wish to quit the game, just type\n ;in a negative number.\n";
    std::cout << "Good luck!\n";
    std::cout << "----------------------------------------------------\n";
}

int main(int argc, char *argv[])
{
    // constexpr std::array<size_t, n> a;
    constexpr short default_limit{30};
    short limit;

    if (argc == 1)
    {
        printHelpMessage();
    }
    else if (argc == 2)
    {
        limit = std::stoi(argv[1]);
        printStartMessage(limit);
    }
    else
    {
        std::cout << ">>> EXCESSIVE ARGUMENTS.\n";
        printHelpMessage();

        exit(1);
    }

    std::srand(time(NULL));

    int secret = std::rand() % limit + 1;

    std::cout << secret << std::endl;

    // int prev = secret;

    // while (prev >= 0) {
    //     int guess;
    //     std::cin >> guess;
    //     if (guess == secret) {
    //         std::cout << "Yeah, correct guess!\n";
    //     } else if (guess )

    // }

    return 0;
}