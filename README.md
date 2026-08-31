# 🎮 Simple Games Collection

> **🚧 Actively maintained & updated irregularly** — New games and features are added from time to time. Star ⭐ to stay tuned!

A collection of terminal mini-games written in C, built for killing time and having fun.

---

## 🎯 How to Play

Type `yes` to start, then play through each mini-game in sequence. **Reach at least 100 points to WIN!**

If your score drops below 0, you go **bankrupt** and lose everything.

---

## 🕹️ Games

| # | Game | How It Works | Scoring |
|---|------|--------------|---------|
| 1 | **Mad Libs** | Fill in an adjective, two nouns, and a verb to generate a silly story | +50 base; +20 bonus if the adjective is longer than 8 characters |
| 2 | **Basic Maths** | Solve a randomly generated math problem (+, −, ×) | +50 for correct answer; +20 extra for multiplication; −100 for wrong answer |
| 3 | **Guess A Number!** | Guess the secret number between 1 and 100 | +50 when you get it right; −10 for every wrong guess |

> 💡 **Dev tip:** Quick-access `goto` labels (`game1`, `game2`, `game3`) are commented out in the source for easy debugging and testing individual stages.

---

## 🏆 Win / Lose Conditions

| Score | Result |
|-------|--------|
| ≥ 100 | 🎉 **You WIN!** `:)` |
| < 0 | 💸 **Bankrupt!** `:(` |
| 0 ~ 99 | 😐 **You LOSE!** `:|` |

---

## 🚀 Quick Start

### Build

```bash
make
```

Or compile manually:

```bash
gcc -Wall -Wextra -std=c99 -o game game.c
```

### Run

```bash
./game
```

---

## 📁 Project Structure

```
.
├── game.c        # Main source code
├── Makefile      # Build configuration
├── README.md     # This file
├── LICENSE       # MIT License
└── .gitignore    # Git ignore rules
```

---

## 🛠️ Technical Notes

- `srand(time(NULL))` seeds the RNG so every run produces different random numbers.
- `scanf` uses width limits (e.g. `%19s`) to prevent buffer overflows.
- POSIX-compliant; works on Linux, macOS, and WSL.

---

## 📌 Roadmap (Updated Irregularly)

- [ ] **Game 4** — A new mini-game is in the works
- [ ] More scoring mechanics and hidden easter eggs
- [ ] Stage selection menu (replacing the `goto` debug shortcuts)

> Got ideas? Open an Issue or send a PR!

---

## 📜 License

[MIT](LICENSE)
