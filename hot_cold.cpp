#include <iostream>
#include <array>

void printHelpMessage()
{
    std::cout << "Use: ./hot_cold [<range_limit>]\n";
}

void printStartMessage(short limit)
{
    std::cout << "===================================================\n";
    std::cout << "Welcome to the Hot-Cold Guess game, copyright 2020.\n";
    std::cout << "===================================================\n";
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
    constexpr short default_limit{30};
    short limit;

    if (argc == 1)
    {
        printHelpMessage();
        exit(0);
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

    int prev = secret;

    std::cout << ">>> Guess the number: ";

    while (true)
    {
        int guess;

        std::cin >> guess;

        if (guess < 0)
        {
            exit(0);
        }

        int distance_guess = (guess > secret) ? guess - secret : secret - guess;
        int distance_prev = (prev > secret) ? prev - secret : secret - prev;

        if (guess == secret)
        {
            std::cout << ">>> Yeah, correct guess!\n";
            std::cout << "Thanks for playing!\n";

            exit(0);
        }
        else if (distance_guess <= distance_prev)
        {
            std::cout << ">>> Nop, it’s hot though, try again: ";
        }
        else
        {
            std::cout << ">>> Nop, it’s getting cold, try again: ";
        }

        prev = guess;
    }

    return 0;
}