1  #include "list.h"
2
3  /**
4   *  print_listint - prints all the elements of a linked list
5   *  @h: head of the list
6   *
7   *  Return: the number of nodes
8   */
9  size_t print_listint(const listint_t *h) 
10 {
11	  const listint_t *cursor = h;
12	  size_t count = 0;
13
14	  while (cursor != NULL)
15        {		  
16		 printf("%d\n", cursor->n)
17               count += 1;
18		 cursor = cursor->next;
19	  }
20	  return (count);
21 }
