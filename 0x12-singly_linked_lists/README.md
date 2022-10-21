# 0x12-singly_linked_lists

## Learning Objectives

- What is a linked list
- Start to look for the right source of information without too much help

## Tasks

### 0. Print list

Write a function that prints all the elements of a list_t list.

- Prototype: size_t print_list(const list_t \*h);
- Return: the number of nodes
- Format: see example
- If str is NULL, print [0] (nil)
- You are allowed to use printf

```C
alex@/tmp/singly_linked_lists$ cat 0-main.c
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)

{

list_t *head;

list_t *new;

list_t hello = {"World", 5, NULL};

size_t n;

head = &hello;

new = malloc(sizeof(list_t));

if (new == NULL)

{

dprintf(2, "Error: Can't malloc\n");

return (1);

}

new->str = strdup("Hello");

new->len = 5;

new->next = head;

head = new;

n = print_list(head);

printf("-> %lu elements\n", n);

free(new->str);

free(new);

return (0);

}

alex@/tmp/singly_linked_lists$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-print_list.c -o a

alex@/tmp/singly_linked_lists$ ./a

[5] Hello

[5] World

-> 2 elements

alex@/tmp/singly_linked_lists$
```

### 1. List length
