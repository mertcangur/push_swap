# push_swap

## Overview
`push_swap` is an algorithmic project from the 42 school curriculum that involves sorting a stack of integers using a limited set of operations. The goal is to sort the numbers efficiently using the least amount of moves.

## Features
- Implements an optimized sorting algorithm for a stack.
- Uses only the allowed operations:
  - `sa` : Swap the first two elements of stack A
  - `sb` : Swap the first two elements of stack B
  - `ss` : Swap the first two elements of both stacks
  - `pa` : Push the top element of stack B to stack A
  - `pb` : Push the top element of stack A to stack B
  - `ra` : Rotate stack A upwards
  - `rb` : Rotate stack B upwards
  - `rr` : Rotate both stacks upwards
  - `rra` : Reverse rotate stack A downwards
  - `rrb` : Reverse rotate stack B downwards
  - `rrr` : Reverse rotate both stacks downwards
- Efficient handling of different input sizes:
  - Small stacks (3-5 numbers) sorted with minimal moves
  - Larger stacks sorted with advanced algorithms
- Error handling for invalid input

## Installation
1. Clone the repository:
   ```sh
   git clone https://github.com/mertcangur/push_swap.git
   cd push_swap
   ```
2. Compile the program:
   ```sh
   make
   ```

## Usage
Run `push_swap` with a list of integers as arguments:
```sh
./push_swap 4 67 3 87 23
```
It will output a sequence of operations to sort the given numbers.

To check the validity of the solution, use it with a checker program (if implemented):
```sh
./push_swap 4 67 3 87 23 | ./checker 4 67 3 87 23
```

## Project Structure
- `push_swap.c` - Main implementation of sorting logic
- `operations.c` - Implementation of allowed stack operations
- `sorting_algorithms.c` - Sorting techniques used for different stack sizes
- `utils.c` - Helper functions
- `Makefile` - Compilation rules

