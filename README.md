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

---

## 🧠 Approach

The program uses a mathematically optimal approach based on the properties of triangular numbers:

1. Compute the largest integer `k` such that the sum of the first `k` natural numbers (`1 + 2 + ... + k`) is **greater than or equal to** `n`.
2. Let this sum be `total = k * (k + 1) / 2`.
3. If `total == n`, then the answer is simply all numbers from `1` to `k`.
4. If `total > n`, compute `missing = total - n`. This is the number to **exclude** from the list `1..k` so that the final sum becomes exactly `n`.

✅ This approach guarantees:
- All summands are **distinct natural numbers**
- Their **sum equals `n`**
- The **maximum number used is as small as possible**

---


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

### 🔁 Example

**Input:** `n = 100`

1. Find the largest `k` such that `k(k + 1)/2 ≥ 100`  
   → `k = 14` because `14 × 15 / 2 = 105`

2. Compute `missing = 105 - 100 = 5`  
   → So we skip the number `5` from the sequence `1..14`

**Output:**  
`1 + 2 + 3 + 4 + 6 + 7 + 8 + 9 + 10 + 11 + 12 + 13 + 14 = 100`

✅ All numbers are distinct  
✅ Maximum number used is minimized  
✅ Sum is exactly `100`


---

## 📂 Files
- `sumgame.cpp:` Main C++ program source code
- `README.md:` Documentation for the project

---

## 🔍 Possible Extensions
- Display result as a right-angled triangle using ASCII art.
- Add a GUI for visualization.
- Include unit tests for edge cases and validation.
