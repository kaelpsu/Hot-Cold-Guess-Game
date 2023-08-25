# Hot-Cold Guess Game

The Hot-Cold Guess Game is a simple number guessing game where the player's goal is to guess a secret integer between 1 and N. The player makes guesses, and after each guess, they receive feedback on whether the guess is equal to the secret integer or if it's hotter (closer to) or colder (farther from) the secret number compared to the previous guess. The game continues until the player guesses the correct number.

The user interface is command-line-based, keeping the game simple and accessible to users without any graphical interface requirements.

## Compilation

To compile the Hot-Cold Guess Game, you can use the following command:

```bash
g++ -Wall -std=c++17 main.cpp -o hot_cold
```

## Usage

1. Run the compiled executable using the command line.
2. Enter a value for `N`, the upper limit of the secret number range.
3. The game will generate a random secret integer between 1 and `N`.
4. You will be prompted to start guessing the secret number.
5. Enter your guesses one by one.
6. After each guess, you will receive feedback on whether the guess is hot (closer) or cold (farther) compared to the previous guess.
7. Continue guessing until you correctly guess the secret number, at which point the game will stop.