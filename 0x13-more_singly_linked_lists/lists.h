1   #ifndef _LISTS_
2   #define _LISTS_
3
4   #include <stdio.h>
5   #include <stdlib.h>
6
7   /**
8    * strut listint_s -singly linked list
9    * @n: integer
10   * @next: points to the next node
11   *
12   * Description: singly linked list node structure
13   * for Holberton project
14   */
15  typedef strct listint_s
16  {
17	    int n;
18     	    struct listint_s *next;
19  } listint_t;
20
21  /**
22   * struct listp_s - singly linked list
23   * @p: pointers of nodes
24   * @next: points to the next node
25   *
26   * Description: singly linked list of poiters
27   */
28  typedef struct listp_s
29  {
30  	    void *p;
31	    struct listp_s *next;
32  } listp_t;
33
34  size_t print_listint(const listint_t *h);
35  size-t listint_len(const listint_t *h);
36  listint_t *add_nodeint(listint_t **head, const int n);
37  listint_t *add_nodeint_end(listint_t **head, const int n);
38  void free_listint(listint_t *head);
39  void free_listint2(listint_t **head);
40  int pop_listint(listint_t **head);
41  listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);
42  int sum_listint(listint_t *head);
43  listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx,int n);
44  int delete_nodeint_at_index(listint_t **head,unsigned int index);
45  listint_t *reverse_listint(listint_t **head);
46  size_t print_listint_safe(const listint_t *head);
47  size_t free_listint_safe(listint_t **h);
48  listint_t *find_listint_loop(listint_t *head);
49
50  #endif

