# Number Guessing Game in C.
A fun and interactive **Number Guessing Game** written in **C language**.  
The computer randomly generates a number, and the player has to guess it.

## Features
- Random number generation
- User-friendly input/output
- Tells if your guess is **too high** or **too low**
- Counts number of attempts
- Congratulates you when you guess correctly.

### Game Rules
1. The computer generates a random number between **1 and 100**.
2. You enter your guess.
3. The program tells you:
   - **Too high** → Guess a smaller number
   - **Too low** → Guess a larger number
4. Repeat until you find the correct number.
5. The game shows how many attempts you took.

#### How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/<your-username>/number-guessing-game.git
   
**OUTPUT**
Welcome to number guessing game.
I have picked a number between 1 and 100.
Enter your guess: 50
Too low! Try again.
Enter your guess: 75
Too high! Try again.
Enter your guess: 63
Correct! You guessed it in 3 attempts.

