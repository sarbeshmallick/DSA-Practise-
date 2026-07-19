# C++ Basics

A structured, from-scratch walkthrough of core C++ fundamentals — written while learning through Striver's [TUF (Take U Forward)](https://takeuforward.org/) C++ course, with my own notes, dry runs, and quiz breakdowns added along the way.

Every file compiles cleanly (`g++ -Wall -Wextra`, C++17) and is organized by topic in the order it was learned.

## 📚 Topics covered

| # | Topic | Folder |
|---|-------|--------|
| 1 | Basics — data types, variable declaration, integer limits | [`1. basics/`](./1.%20basics) |
| 2 | Input/Output — `cin`, `cout`, dynamic vs. static input | [`2. input-output/`](./2.%20input-output) |
| 3 | Conditionals — `if`/`else`, nested if-else, `switch` | [`3. conditionals/`](./3.%20conditionals) |
| 4 | Loops — `for`, `while` | [`4. loops/`](./4.%20loops) |
| 5 | Arrays — declaration, traversal, indexing | [`5. Arrays/`](./5.%20Arrays) |
| 6 | Strings — `cin` vs. `getline()`, traversal, string ops | [`6. strings/`](./6.%20strings) |
| 7 | Functions — parameters, return types, pass-by-value vs. pass-by-reference, arrays in functions | [`7. functions/`](./7.%20functions) |

## 📝 Notes

[`notes.md`](./notes.md) is my running learning journal for every topic above — problem statements, code, dry runs, common mistakes I made (and how I caught them), and quiz-style self-checks. It's written as a study log, not polished documentation, so it's verbose by design.

## ▶️ Running the code

Each `.cpp` file is standalone. Compile and run any file with:

```bash
g++ -std=c++17 "path/to/file.cpp" -o output
./output
```

## 🚧 Currently learning / up next

- [ ] Vectors (`std::vector`)
- [ ] Pointers
- [ ] 2D arrays / matrices
- [ ] Structures
- [ ] Recursion

## About

Personal learning repo — feedback and corrections welcome via issues.