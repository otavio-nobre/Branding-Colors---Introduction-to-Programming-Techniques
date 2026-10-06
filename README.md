# Hex to RGB Color Converter – ITP / UFRN

This repository contains a C program developed for an assignment in **Introduction to Programming Techniques** (*Introdução às Técnicas de Programação – ITP*), part of the Bachelor's degree in Information Technology (**BTI**) at the Federal University of Rio Grande do Norte (**UFRN**).

The program converts web color codes formatted as `#RRGGBB` (hexadecimal string) into decimal `rgb(R, G, B)` format required by video editing software.

---

## Overview

* Reads total color entries $N$ followed by $N$ hex string codes in `#RRGGBB` format.
* Parses each hexadecimal pair (`RR`, `GG`, `BB`) into base-10 integer values using positional notation ($D_1 \times 16 + D_2$).
* Formats output dynamically with $O(1)$ memory usage per color payload.

---

## Input & Output Format

### Input
* First line contains an integer $N$ ($1 \le N \le 100$).
* The following $N$ lines each contain a color string in `#RRGGBB` format with uppercase letters.

### Output
* For each color, outputs a single line formatted as: `#RRGGBB: rgb(R, G, B)`.

---

## Compilation & Execution

To compile and run the program using `gcc`:

```bash
# Compile
gcc -O2 main.c -o hex_to_rgb

# Run
./hex_to_rgb
