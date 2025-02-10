# Week 5: Data Structures #

- Data Structures: 

- Abstract Data Types: 

- Queues: First In, First Out (FIFO), the first element to enter the queue is the first element to be removed or dequeued. 
    - Enqueue: A function/method to add an element to the queue. 
    - Dequeue: A function/method to remove the first element from the queue. 
    - Example: 
    ```
    const int CAPACITY = 50;

    typedef struct
    {
        person people[CAPACITY];
        int size;
    } queue;
    ```

- Stacks: Last In, First Out (LIFO), the last element to be added to the stack is the first element to be removed, or *popped* from the stack.
    - push: To add or *push* an element onto the stack
    - pop: To remove or *pop* an element from the top of the stack. 
    - Example:
    ```
    const int CAPACITY = 50;

    typedef struct
    {
        person people[CAPACITY];
        int size;
    } stack;
    ```

- Linked List: A list where pointers are used to *link* elements together within the computers memory. 
    - Search: O(n)
    - Inserting at the head: O(1)
    - Example:
    ```
    typedef struct node
    {
        int number;
        node *next;
    } node;
    ```
- Trees: 
    - Binary Search Tree: A 2D Tree structure that Binary Search can be performed on. Every nodes left child is less than the root and every nodes right child is greater than the root. 
        - O(log n) if the tree is perfectly balanced.
        - Example:
        ````
        bool search(node *tree, int number)
        {
            if (tree == NULL)
            {
                return false;
            }
            else if (number < tree->number)
            {
                return search(tree->left, number)
            }
            else if (number > tree->number)
            {
                return search(tree->right, number)
            }
            else if (number == tree->number)
            {
                return true;
            }
        }
        ````

- Dictionaries: A set of (key, value) pairings where they key and value are typically related. 
    - Hash Function: 
    - Hash Tables: An "array of linked lists" where you can bucket data values within an array of base similarities then link together *collisions* (cross-over events like 2 names that start with M) using a linked list. 
        - O(n/k) -> k is the number of buckets
    - Tries: A "tree of arrays" 
        - Time Complexity only depends on the length of the search input. NOT on n, or the number of possible searches overall. 