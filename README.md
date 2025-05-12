# Minimal Sum Decomposition

This project implements a C++ program that takes a natural number as input and decomposes it into a sum of the **smallest possible distinct natural numbers**, such that:
- The sum equals the input.
- The **maximum number** in the sum is **minimized**.

This is useful for understanding greedy algorithms, number partitions, and minimal-max sum strategies.

## 📌 Problem Description

Given a natural number `n`, decompose it into a sum of distinct natural numbers such that:

- The numbers are all **positive and unique**.
- Their sum equals `n`.
- Among all such decompositions, choose the one where the **maximum number is the smallest possible**.

### ✅ Examples

| Input | Output         | Explanation                             |
|-------|----------------|-----------------------------------------|
| 1     | `1`            | Only one way                            |
| 2     | `2`            | Only one way                            |
| 3     | `1 + 2`        | Preferable to `3`                       |
| 4     | `1 + 3`        | Better than `2 + 2` or `4`              |
| 5     | `2 + 3`        | Better than `1 + 4`                     |
| 6     | `1 + 2 + 3`    | Ideal case                              |
| 7     | `1 + 2 + 4`    | `1 + 2 + 3 = 6`, so we replace `3` with `4` to reach `7` |

## 🧠 Approach

The program uses a **greedy algorithm**:
1. Start adding natural numbers from `1` upward.
2. Continue until the sum would exceed `n`.
3. If there's a remaining difference, add it to the **last number** to reach the exact total while preserving uniqueness.

This ensures the maximum number is as small as possible, and all terms are distinct.

## 🛠️ How to Compile and Run

### Requirements
- A C++ compiler such as `g++`

### Steps
1. **Clone or download** the repository.
2. **Compile the code**:
   ```bash
   g++ -o minimal_sum sumgame.cpp
   ```
3. **Run the executable**:
   ```bash
   ./minimal_sum
   ```
4. **Input a natural number and observe the output decomposition.**

### 💻 Example
Enter a natural number: 7
Minimal sum with smallest max: 1 + 2 + 4

---

## 📂 Files
- `sumgame.cpp:` Main C++ program source code
- `README.md:` Documentation for the project

---

## 🔍 Possible Extensions
- Display result as a right-angled triangle using ASCII art.
- Add a GUI for visualization.
- Include unit tests for edge cases and validation.
