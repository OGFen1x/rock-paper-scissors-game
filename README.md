# Rock-Paper-Scissors Game in C

This repository contains a simple command-line Rock-Paper-Scissors game written in C. The user can play against the computer, which makes a random choice each round.

## How to Play

1. Clone this repository or download the code:
   ```bash
   git clone https://github.com/OGFen1x/rock-paper-scissors-game.git
   ```
2. Navigate to the directory:
   ```bash
   cd rock-paper-scissors-game
   ```
3. Compile the program:
   ```bash
   gcc rock_paper_scissors.c -o rock_paper_scissors
   ```
4. Run the program:
   ```bash
   ./rock_paper_scissors
   ```

5. Enter your choice when prompted:
   - `s` for Stone
   - `p` for Paper
   - `x` for Scissors

6. The game will display the result of the round.

## Game Rules

- **Stone** beats **Scissors**
- **Scissors** beats **Paper**
- **Paper** beats **Stone**

If both the user and computer choose the same option, the game is a draw.

## Example Output

```
Enter 's' for STONE, 'p' for PAPER, and 'x' for SCISSORS
> s

Wow! You have won the game!
You chose: s and Computer chose: x
```

## Contributing

Feel free to open issues or submit pull requests if you’d like to improve this game!

## License

This project is licensed under the MIT License.
