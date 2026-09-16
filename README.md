# 🚀 Competitive Programming Journey & Problem Archive

[![C++](https://img.shields.io/badge/Language-C%2B%2B17%2F20-blue.svg?logo=cplusplus)](https://isocpp.org/)
[![Python](https://img.shields.io/badge/Language-Python%203-yellow.svg?logo=python)](https://www.python.org/)
[![Codeforces](https://img.shields.io/badge/Platform-Codeforces-1F8ACB.svg?logo=codeforces)](https://codeforces.com/)
[![AtCoder](https://img.shields.io/badge/Platform-AtCoder-black.svg)](https://atcoder.jp/)
[![Status](https://img.shields.io/badge/Status-Actively%20Practicing-success.svg)](#roadmap--milestones)
[![License](https://img.shields.io/badge/License-MIT-lightgrey.svg)](LICENSE)

Welcome to my central **Competitive Programming (CP)** repository! This archive chronicles my algorithmic journey, structured problem-solving milestones, contest submissions, and ladder progression across **Codeforces** and **AtCoder**.

---

## 📌 Table of Contents

- [Overview](#-overview)
- [Repository Structure](#-repository-structure)
- [Curriculum & Progress Tracker](#-curriculum--progress-tracker)
  - [CP-31 Sheet Ladder](#cp-31-sheet-progression)
  - [AtCoder Contests](#atcoder-contests)
  - [Codeforces Contests](#codeforces-rounds)
- [Key Algorithmic Concepts](#-key-algorithmic-concepts)
- [Standard C++ Template](#-standard-c-template)
- [How to Compile & Run](#-how-to-compile--run)
- [Roadmap & Milestones](#-roadmap--milestones)
- [Connect & Profiles](#-connect--profiles)

---

## 🌟 Overview

This repository is designed to document deliberate practice in competitive programming. It highlights:
- **Systematic Rating Progression**: Solving curated problem sheets to solidify intuition for various rating brackets ($800 \to 900 \to 1000+$).
- **Contest Simulation & Upsolving**: Real-time round participation and post-contest problem upsolving to improve speed and edge-case handling.
- **Optimized Implementations**: Clean, fast, and idiomatic C++ solutions utilizing Standard Template Library (STL) and modular logic.

---

## 📁 Repository Structure

```text
CP/
├── 800/                  # CP-31 Sheet: 800 Rating problems (CP1 to CP31)
│   ├── CP1.py
│   ├── CP2.cpp
│   └── ...
├── 900/                  # CP-31 Sheet: 900 Rating problems (CP1 to CP31)
│   ├── CP1.cpp
│   ├── CP2.cpp
│   └── ...
├── 1000/                 # CP-31 Sheet: 1000 Rating problems (Active milestone)
│   ├── 1883C.cpp
│   ├── 1913B.cpp
│   └── ...
├── AtCoder/              # AtCoder Beginner Contest practice rounds
│   ├── Second/
│   ├── Third/
│   ├── Fourth/
│   ├── Fifth/
│   ├── sixth/
│   ├── seventh/
│   ├── Eight/
│   └── Ninth/
├── Codeforces Contest/   # Codeforces live & virtual contests (Contest to Contest16)
│   ├── Contest/
│   ├── contest2/
│   └── Contest3/ ... Contest16/
├── CP.cpp                # Fast I/O Starter Template for C++
├── CP.code-workspace     # Visual Studio Code workspace configuration
└── README.md             # Repository documentation & tracker
```

---

## 📊 Curriculum & Progress Tracker

### CP-31 Sheet Progression

A structured track based on the **CP-31 Sheet** designed to build rock-solid fundamentals at each rating tier:

| Rating Tier | Target Problems | Solved / Status | Focus Areas |
|:---:|:---:|:---:|:---|
| **800** | 31 | **31 / 31 (100%)** | Implementation, basic math, conditionals, loops, greedy patterns |
| **900** | 31 | **31 / 31 (100%)** | Constructive algorithms, parity checks, two pointers, prefix arrays |
| **1000** | 31 | **In Progress 🚀** | Modulo arithmetic, sorting + greedy, frequency counting, strings |
| **1100** | 31 | *Upcoming* | Binary search, GCD/LCM, number theory, prime factorizations |
| **1200** | 31 | *Upcoming* | Combinatorics, basic dynamic programming, two pointers, invariant states |

### AtCoder Contests
Practicing quick analytical thinking and implementation accuracy with **AtCoder Beginner Contests (ABC)**:
- **Rounds Covered**: Second through Ninth ABC problem sets.
- **Focus**: Pure logic puzzles, rigorous edge cases, and grid/coordinate computations.

### Codeforces Rounds
- **Contests Archived**: Located in `Codeforces Contest/` (`Contest` through `Contest16`).
- **Rounds Practiced**: Codeforces Div. 2, Div. 3, and Div. 4 rounds.
- **Strategy**: Timed problem solving (Problem A, B, C) followed by detailed post-contest analysis (upsolving).

---

## 🧠 Key Algorithmic Concepts

The solutions in this repository demonstrate mastery and exploration of core algorithms and paradigms:

- **Greedy Algorithms**: Interval scheduling, local-to-global optimal decisions, sorting-based optimizations.
- **Mathematics & Number Theory**: Parity properties, GCD/LCM (Euclidean Algorithm), prime checking, modular arithmetic.
- **Array Transformations & Invariants**: Prefix sums, difference arrays, two-pointer scanning, sliding windows.
- **Constructive Algorithms**: Building valid sequences/permutations under tight constraints without brute force.
- **String Manipulation**: Palindrome properties, frequency analysis, anagram transformations.
- **Binary Search**: Binary search on answer space and monotone predicate checks.

---

## ⚡ Standard C++ Template

Every solution is built on top of a lean, high-performance C++ fast I/O setup:

```cpp
#include <bits/stdc++.h>
using namespace std;

// Fast I/O & modular test-case runner
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        // Solution logic per testcase
    }
    return 0;
}
```

### Why Fast I/O Matters
1. `ios_base::sync_with_stdio(false)` unties C++ streams from C standard streams (`stdio`), eliminating synchronization overhead.
2. `cin.tie(NULL)` avoids automatic flushing of `cout` before each `cin`, critical when dealing with inputs up to $2 \times 10^5$ elements under strict 1.0s time limits.

---

## 🛠️ How to Compile & Run

### Prerequisites
- **GCC / G++** (version 10 or later recommended) supporting C++17 or C++20.
- *(Optional)* **Python 3.8+** for script-based problem solutions.

### Compiling C++ Solutions
To compile with standard competitive programming optimizations:

```bash
# Compile with C++17 standard and O2 optimization
g++ -O2 -std=c++17 -Wall 1000/1883C.cpp -o solution

# Run executable (Windows)
./solution.exe

# Run executable (Linux/macOS)
./solution
```

### Running Python Solutions
```bash
python 800/CP1.py
```

---

## 🎯 Roadmap & Milestones

- [x] Complete CP-31 800 Rating ladder (31/31)
- [x] Complete CP-31 900 Rating ladder (31/31)
- [ ] Complete CP-31 1000 Rating ladder (Currently active)
- [ ] Reach Codeforces Pupil (1200+)
- [ ] Push to Codeforces Specialist (1400+)
- [ ] Consistently solve Div. 3 problems A through D in contest

---

## 👤 Author & Profiles

Crafted with dedication by **Harshit**.

- **GitHub**: [@HarshitD0501](https://github.com/HarshitD0501)
- **Codeforces**: [HarshitD0501](https://codeforces.com/profile/HarshitD0501) *(Update with your exact profile link)*
- **Repository**: [HarshitD0501/CP](https://github.com/HarshitD0501/CP)

---

⭐ *If you find these solutions or roadmaps helpful for your own CP preparation, feel free to star this repository!*
