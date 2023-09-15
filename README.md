A custom printf function in C, inspired by the standard C library's `printf`.

## Table of Contents
- [Introduction](#introduction)
- [Features](#features)
- [Getting Started](#getting-started)
  - [Prerequisites](#prerequisites)
  - [Installation](#installation)
- [Usage](#usage)
- [Supported Conversion Specifiers](#supported-conversion-specifiers)
- [Examples](#examples)
- [Contributing](#contributing)
- [License](#license)
- [Acknowledgments](#acknowledgments)

## Introduction

This project aims to implement a custom `printf` function in C, following the guidelines and constraints provided. It replicates the basic functionality of the standard C library's `printf` while adding some custom conversion specifiers and features.
This Project has been made by @MohamedTarekO and @EL-HOUSS-BRAHIM for ALX Printf Project. 

## Features

- Supports standard conversion specifiers: `c`, `s`, `d`, `i`, `u`, `o`, `x`, `X`, `%`.
- Custom conversion specifiers: `b`, `S`, `p`, `r`, `R`.
- Supports flag characters: `+`, ` `, `#`, `0`, `-`.
- Handles field width and precision.
- Optimized with a local buffer to minimize `write` calls.

## Getting Started

### Prerequisites

- GCC Compiler
- GNU Make

### Installation

Clone the repository and compile the code:

```bash
git clone https://github.com/EL-HOUSS-BRAHIM/Printf.git
cd Printf
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o printf
