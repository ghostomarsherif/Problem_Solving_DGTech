<a name="top"></a>

# C++ Problem Solving Roadmap 

[![C++](https://img.shields.io/badge/C%2B%2B-11%2F14-00599C?style=flat-square&logo=c%2B%2B&logoColor=white)](#)
[![Roadmap](https://img.shields.io/badge/Roadmap-Problem%20Solving-2EA44F?style=flat-square)](#)
[![Deitel](https://img.shields.io/badge/Deitel-C%2B%2B%20How%20to%20Program%2010e-6F42C1?style=flat-square)](#)
[![HackerRank](https://img.shields.io/badge/HackerRank-Practice-00EA64?style=flat-square&logo=hackerrank&logoColor=white)](https://www.hackerrank.com/domains/cpp)
[![LeetCode](https://img.shields.io/badge/LeetCode-Practice-FFA116?style=flat-square&logo=leetcode&logoColor=black)](https://leetcode.com/problemset/)

This roadmap provides a progressive C++ **problem-solving** path aligned with *C++ How to Program (10th Edition)* by Deitel, combined with curated HackerRank and LeetCode problems to build strong fundamentals in data structures, algorithms, and interview preparation.

---

## References

- 8 patterns to solve 80% Leetcode problems 
  [https://youtu.be/xo7XrRVxH8Y](https://youtu.be/xo7XrRVxH8Y?si=auOQQZ4hsUPcFgKH) 
  
---
<details>
<summary><strong>Quick navigation</strong></summary>

- [Goals](#goals)
- [Phases Overview](#phases-overview)
- [Phase 1 – Foundations (Chapters 1–5)](#phase-1--foundations-chapters-15)
- [Phase 2 – Functions and Arrays (Chapters 6–7)](#phase-2--functions-and-arrays-chapters-67)
- [Phase 3 – Pointers and Advanced OOP (Chapters 8–10)](#phase-3--pointers-and-advanced-oop-chapters-810)

</details>

---

## Goals

> [!TIP]
> Treat each phase like a sprint: read → implement examples → solve problems → review patterns.

- Build a solid foundation in C++ syntax, OOP, and modern C++11/C++14 features.  
- Practice algorithmic thinking through structured sets of problems on HackerRank and LeetCode.  
- Progress from beginner to advanced problem-solving with clear phases and learning objectives.

---

## Phases Overview

| Phase | Chapters (Deitel 10e) | Duration (weeks) | Problems | Difficulty |
|------|------------------------|------------------|----------|-----------|
| Phase 1: Foundations | Ch. 1–5 | 2 | 40–50 | Easy |
| Phase 2: Functions & Arrays | Ch. 6–7 | 2 | 45–55 | Easy–Medium |
| Phase 3: Pointers & Advanced OOP | Ch. 8–10 | - | 50–60 | Medium |

---

## Phase 1 – Foundations (Chapters 1–5)

**Duration:** 2 weeks  
**Difficulty:** Easy  

> [!NOTE]
> Focus on clean I/O, correct edge cases, and writing small helper functions early—even in “easy” problems.

### Textbook Focus

- Chapters 1–2: Introduction to C++ Programming – basic syntax, program structure, input/output, variables, data types, arithmetic operators, basic decision making.  
- Chapters 3–5: Objects, Control Statements, Iteration – classes and objects introduction, if/switch, while/for/do–while loops, break/continue, logical operators, nested loops, loop invariants.

### HackerRank (Concept Practice, 10–15 problems)

Suggested problem categories:

- Say "Hello, World!" With C++  
- Input and Output  
- Basic Data Types  
- Conditional Statements  
- For Loop  
- Functions  
- Pointer Introduction  
- Arrays Introduction  
- Variable Sized Arrays  
- Strings  

### LeetCode (Easy, 10 problems)

- Two Sum (Array, hash table basics)  
- Palindrome Number (Mathematical operations)  
- Roman to Integer (String processing)  
- Valid Parentheses (Stack introduction)  
- Merge Two Sorted Lists (Basic linked list)  
- Remove Duplicates from Sorted Array (Two pointers)  
- Plus One (Array manipulation)  
- Add Binary (String and bit manipulation)  
- Sqrt(x) (Binary search introduction)  
- Climbing Stairs (Basic DP pattern)  

### Extra LeetCode Easy (12 problems)

- Best Time to Buy and Sell Stock (Greedy, single pass)  
- Single Number (XOR technique)  
- Majority Element (Boyer–Moore algorithm)  
- Contains Duplicate (Hash set)  
- Missing Number (Mathematical approach)  
- Move Zeroes (Two pointers)  
- Intersection of Two Arrays II (Hash map)  
- Happy Number (Cycle detection)  
- Power of Three (Mathematical)  
- Count Primes (Sieve of Eratosthenes)  
- Reverse String (Two pointers)  
- First Unique Character in a String (Hash map)  

**Objectives:** Master basic syntax, IO, primitive types, control flow, and simple problem decomposition.

[Back to top](#top)

---

## Phase 2 – Functions and Arrays (Chapters 6–7)

**Duration:** 2 weeks  
**Difficulty:** Easy to Medium  

> [!IMPORTANT]
> For recursion: always define the base case first, then verify progress toward it on every call.

### Textbook Focus

- Chapter 6: Functions and Recursion – function definitions and prototypes, pass by value/reference, overloading, recursion basics, call stack, divide‑and‑conquer.  
- Chapter 7: Arrays and Vectors – static arrays, `std::vector`, multidimensional arrays, passing arrays to functions, searching and sorting.

### HackerRank (Concept Practice, 8–10 problems)

Recommended areas:

- Functions (basic)  
- Recursion in C++  
- C++ Class Template Specialization  
- Overload Operators / Operator Overloading (basic)  
- Arrays Introduction  
- Vector-Sort  
- Vector-Erase  
- Lower Bound–STL / Upper Bound–STL  
- Deque–STL  
- Print Pretty  

### LeetCode – Functions & Recursion (Easy–Medium, 15 problems)

- Reverse Linked List (Recursion practice)  
- Fibonacci Number (Recursion with memoization)  
- Power(x, n) (Recursive exponentiation)  
- Merge Two Sorted Lists (Recursive approach)  
- Maximum Depth of Binary Tree (Tree recursion)  
- Invert Binary Tree (Tree recursion)  
- Same Tree (Tree comparison)  
- Symmetric Tree (Tree symmetry check)  
- Path Sum (Tree DFS)  
- Sum of Left Leaves (Tree traversal)  
- Binary Tree Paths (Backtracking)  
- Lowest Common Ancestor of BST (Recursion)  
- Minimum Depth of Binary Tree (BFS/DFS)  
- Balanced Binary Tree (Height calculation)  
- Valid Palindrome (Two pointers + recursion)  

### LeetCode – Arrays & Vectors (Easy–Medium, 20 problems)

- Two Sum (Hash table approach)  
- Product of Array Except Self (Prefix/suffix arrays)  
- Maximum Subarray (Kadane’s algorithm)  
- Search Insert Position (Binary search)  
- Find First and Last Position of Element in Sorted Array (Binary search variation)  
- Search in Rotated Sorted Array (Modified binary search)  
- Find Minimum in Rotated Sorted Array (Binary search)  
- 3Sum (Two pointers)  
- Container With Most Water (Two pointers)  
- Rotate Array (Array manipulation)  
- Remove Element (Two pointers)  
- Sort Colors (Dutch national flag)  
- Merge Sorted Array (Two pointers)  
- Spiral Matrix (Matrix traversal)  
- Set Matrix Zeroes (In-place modification)  
- Subarray Sum Equals K (Prefix sum + hash map)  
- Find All Numbers Disappeared in an Array (Index marking)  
- Next Permutation (In-place algorithm)  
- Jump Game (Greedy algorithm)  
- Pascal’s Triangle (DP pattern)  

**Objectives:** Write modular functions, master recursion patterns, and gain confidence with array/vector manipulation, basic searches, and sorts.

[Back to top](#top)

---

## Phase 3 – Pointers and Advanced OOP (Chapters 8–10)

**Duration:** -  
**Difficulty:** Medium  

> [!WARNING]
> With pointers and dynamic memory, prioritize safety: initialize pointers, follow ownership rules, and avoid leaks/dangling references.

### Textbook Focus

- Chapter 8: Pointers and Dynamic Memory – pointer fundamentals and arithmetic, `new`/`delete`, memory management, pointers to functions.  
- Chapters 9–10: Classes – A Deeper Look – constructors and destructors, member data/functions, friend classes, `this` pointer, static members, composition and aggregation, exception handling, virtual functions, abstract classes, polymorphism.

### HackerRank (Concept Practice, 10–12 problems)

Focus areas:

- Pointer Introduction  
- Arrays Introduction (with pointers)  
- Variable Sized Arrays  
- C++ Class Template Specialization  
- Attending Workshops (memory management)  
- Classes and Objects  
- Structs  
- Class (advanced concepts)  
- Box It!  
- Inherited Code  
- Exceptional Server  
- Virtual Functions / Abstract Classes – Polymorphism  

### LeetCode – Linked Lists & Pointers (Medium, 20 problems)

- Reverse Linked List II (Pointer manipulation)  
- Remove Nth Node From End of List (Two pointers)  
- Add Two Numbers (Linked list manipulation)  
- Swap Nodes in Pairs (Pointer swapping)  
- Rotate List (Linked list rotation)  
- Partition List (List partitioning)  
- Remove Duplicates from Sorted List II (Pointer management)  
- Copy List with Random Pointer (Deep copy)  
- Linked List Cycle (Floyd’s algorithm)  
- Linked List Cycle II (Cycle detection)  
- Intersection of Two Linked Lists (Pointer traversal)  
- Palindrome Linked List (List reversal)  
- Odd Even Linked List (Pointer rearrangement)  
- Split Linked List in Parts (List division)  
- Reorder List (Multiple techniques)  
- Sort List (Merge sort on linked list)  
- Insertion Sort List (Sorting with pointers)  
- Delete Node in a Linked List (Pointer tricks)  
- Middle of the Linked List (Fast/slow pointers)  
- Reverse Nodes in k-Group (Advanced pointer manipulation)  

### LeetCode – Design & OOP (Medium, 15 problems)

- Min Stack (Stack with minimum tracking)  
- Implement Queue using Stacks (Data structure design)  
- Design Circular Queue (Circular buffer)  
- Design Linked List (Full linked list implementation)  
- LRU Cache (Hash map + doubly linked list)  
- Design HashMap (Hash table implementation)  
- Design HashSet (Set implementation)  
- Implement Trie (Prefix tree)  
- Add and Search Word (Trie with wildcard)  
- Design Browser History (Stack/linked list design)  
- Design Parking System (Simple class design)  
- Design Underground System (Hash map based system)  
- Time Based Key-Value Store (Sorted map design)  
- Design Twitter (Complex OOP design)  
- Design a Stack With Increment Operation (Stack modification)  

**Objectives:** Master pointer syntax and dynamic memory, implement linked data structures, design robust classes with encapsulation, and use composition, exceptions, and polymorphism.

[Back to top](#top)
