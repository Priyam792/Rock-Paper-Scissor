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

