# 🔢 Our Awesome Sorting Algorithms Project

## Description

The Sorting Algorithms project is part of the Low-Level Programming curriculum at Holberton. The goal is to understand and implement fundamental sorting algorithms in C, analyze their time complexities, and handle arrays and linked lists with care. This was a group project that helped us reinforce collaboration and GitHub workflow practices.

To avoid conflicts, we divided the work as follows: Moussa implemented the Bubble Sort and Insertion Sort algorithms, while I worked on Selection Sort and Quick Sort. For each function, we created a feature branch that we deleted once the task was completed successfully.

## 📁 Project Files

- `sort.h` – Header file containing the definition of the sorting structure and function prototypes.
- `print_array.c` – Utility file used to print an array of integers.
- `print_list.c` – Utility file used to print a doubly linked list.
- Individual `.c` source files – One for each sorting function required by the project tasks.
- `X-O` files – One per task to describe the time complexity in Big O notation (best, average, worst case).

## Requirements

- **Allowed editors:** `vi`, `vim`, `emacs`
- All your files will be compiled on **Ubuntu 20.04 LTS** using:
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- All your source files must end with a new line
- A `README.md` file is mandatory at the root of the project
- Your code must follow the **Betty style**:
  - It will be checked using `betty-style.pl` and `betty-doc.pl`
- **No global variables** are allowed
- You must not have more than **5 functions per file**
- **Standard library** usage is allowed
- All function prototypes must be included in your `sort.h` header file
- All header files must be **include guarded**

## Data Structures

```c
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;
```

## Function Summary

| Function               | Description                                                   |
|------------------------|---------------------------------------------------------------|
| `bubble_sort`          | Sorts an array using the Bubble sort algorithm                |
| `insertion_sort_list`  | Sorts a doubly linked list using the Insertion sort algorithm |
| `selection_sort`       | Sorts an array using the Selection sort algorithm             |
| `quick_sort`           | Sorts an array using the Quick sort algorithm (Lomuto scheme) |

## Compilation

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Examples

### Example of how we sort an array with Bubble Sort

```c
#include <stdio.h>
#include "sort.h"

int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    bubble_sort(array, n);
    print_array(array, n);
    return (0);
}
```

### Example of how we use GitHub feature

```sh
# Create a feature
git checkout -b feature/insertion

# Delete a feature on MAIN branch
git branch -d feature/insertion

# Delete on GitHub
git push origin --delete feature/insertion
```

## 😎 AUTHORS

Moussa Elisoltanov.  
Flora Salanson.
