# Rock-Paper-Scissors
A simple **Rock-Paper-Scissors game** written in C with **cross-platform support** for Windows and Linux  🎮.

## ✨ Features
- Play against the computer (randomized bot).
- Cross-platform `sleep_ms()` implementation:
  - Uses `Sleep(ms)` on Windows (`<windows.h>`).
  - Uses `usleep(ms * 1000)` on Linux (`<unistd.h>`).
- Input validation (ignores invalid moves).
- Animated result calculation with loading dots.

## ⚙️ Usage
### Compile
```bash
# On Linux / Mac
gcc rps.c -o rps

# On Windows (MinGW)
gcc rps.c -o rps.exe

## 🖥️ Example Run
!!! Rock , Paper , Scissor !!!
Enter your name : Priyam

 Use :
 '1' for Rock
 '2' for Paper
 '3' for Scissor

 Your turn : 1
 Your choice     : Rock
 Computer choice : Paper
 You Lose!


📚 What I Learned

Using #ifdef _WIN32 for cross-platform conditional compilation.

Correct random seeding (srand(time(NULL))) to ensure varied bot moves.

Handling user input safely and skipping invalid rounds.

📌 Next Steps

Let player choose number of rounds.

Add score history.

Maybe extend to “Rock-Paper-Scissors-Lizard-Spock” 😄

Calculating Results..........
 Your score : 1 , Bot's score : 2
 Defeat, Better luck next time

