## C Algorithms & Data Structures

## Overview
This repository documents my deep dive into the **C programming language**, specifically focusing on **modular programming** and **dynamic memory allocation**. 

As a cybersecurity enthusiast and student, my goal isn't just to write code that works, but to understand *how* it works under the hood. Mastering manual memory management is the prerequisite for understanding critical security concepts like **Buffer Overflows**, **Heap Spraying**, and **Use-After-Free** vulnerabilities.

##  Repository Structure

### 1. Modular Programming & Matrices (`Algorithms_and_Matrices`)
A collection of algorithms demonstrating code reusability and complex array manipulations.
* **Matrix Operations:** Multiplication (`prod_M`), Transposition (`transpose_M`), and Statistical Analysis (Row/Column Sums).
* **Array Logic:** In-place Reversal and Element Deletion (Shifting logic).
* **Sorting:** Implementation of sorting algorithms to understand algorithmic efficiency.

### 2. Memory Management & Pointers (`Memory_Management`)
Implementations that rely on direct memory manipulation using `stdlib.h`.
* **Dynamic Allocation:** Utilizing `malloc`, `calloc`, and `free` to manage heap memory at runtime.
* **Pointer Arithmetic:** Traversing and manipulating data structures directly via memory addresses rather than array indexing.
* **Key Lab:** `dynamic_merge_sort.c` — A comprehensive implementation of sorting that safely allocates and frees memory to prevent leaks.

## Cybersecurity Context
Why am I building this?
* **Reverse Engineering:** Malware is often written in C/C++. Recognizing patterns in source code helps in reconstructing logic from assembly.
* **Exploit Development:** Understanding how `calloc` clears memory versus `malloc` (which doesn't) is key to finding information leakage bugs.
* **Secure Coding:** Learning to manually manage resources teaches the discipline required to write crash-free, secure software.

---
*Part of my journey to master the low-level fundamentals of Computer Science.*
