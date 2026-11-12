# C programming: low-level fundamentals (Holberton School)

Exercises from the C part of Holberton School's software engineering programme (2025): memory, pointers and data structures written by hand in C. Course rules: standard library functions such as `printf` are often forbidden (output goes through a provided `_putchar`), code is checked against the [Betty](https://github.com/hs-hq/Betty) style, and every task is compiled on Ubuntu 20.04 with

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```

## Contents

| Folder | Topics |
|---|---|
| [`hello_world`](hello_world) | The compilation chain (preprocessor, compiler, assembler, linker), `puts`, `printf`, type sizes on 32- and 64-bit |
| [`variables_if_else_while`](variables_if_else_while) | Variables, conditionals, loops |
| [`functions_nested_loops`](functions_nested_loops) | Functions, prototypes, nested loops, `_putchar` |
| [`more_functions_nested_loops`](more_functions_nested_loops) | More functions and nested loops |
| [`pointers_arrays_strings`](pointers_arrays_strings) | Pointers, arrays and 2D arrays; re-implementing string and memory functions (`strcpy`, `strcat`, `strcmp`, `strchr`, `strstr`, `memset`, `memcpy`, `atoi`…) |
| [`recursion`](recursion) | Recursive functions (string reversal, factorial, power, square root, prime test, palindromes) |
| [`argc_argv`](argc_argv) | Command-line arguments; minimal number of coins for change |
| [`structures_typedef`](structures_typedef) | Structures and `typedef` |
| [`malloc_free`](malloc_free) | Dynamic memory allocation |
| [`more_malloc_free`](more_malloc_free) | Checked `malloc`, `calloc`, string concatenation, integer ranges |
| [`function_pointers`](function_pointers) | Function pointers, a small calculator |
| [`variadic_functions`](variadic_functions) | Variadic functions (`stdarg.h`) |
| [`singly_linked_lists`](singly_linked_lists) | Singly linked lists: printing, length, insertion, freeing |
| [`doubly_linked_lists`](doubly_linked_lists) | Doubly linked lists: traversal, length, insertion at head, tail and index, deletion at index, sum |
| [`bit_manipulation`](bit_manipulation) | Bitwise operations: binary conversion, getting and setting bits |
| [`file_io`](file_io) | File I/O with system calls (`open`, `read`, `write`, `close`) |

## Running an exercise

Each folder has `N-main.c` test drivers next to the files they exercise. For example:

```bash
cd singly_linked_lists
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-print_list.c -o print_list
./print_list
```

## Related repositories

Other C projects from the same programme: [printf](https://github.com/XavierLaforgue/holbertonschool-printf), [sorting algorithms](https://github.com/XavierLaforgue/holbertonschool-sorting_algorithms), [binary trees](https://github.com/XavierLaforgue/holbertonschool-binary_trees).
