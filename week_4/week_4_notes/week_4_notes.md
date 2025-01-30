# Week 4: Memory #

- Bitmap Image: A grid of bits, 0's and 1's, where 0's represent black and 1's represent white. 

- Pixel Art: Customizing individual pixels or square blocks of color to convey images at large. 

- RGB: Red, Green, Blue. 

- Hexadecimal: A code/way of counting lead by a '#' or '0x' where the code translates to a specific color within the color spectrum (#) or numeric value (0x).  
    - 0 1 2 3 4 5 6 7 8 9 A B C D E F --> 16 values. 
    - Base 16 --> 256 total values (0 to 255)
    - Useful because we can represent a byte in 2 digits in hexadecimal. 

- Operator:
    - &: Address of operator, tells you the address of something
    - *: dereference operator, access the element given an address. 
        - Used to declare a variable, as a pointer.
            - Example `int* p = &n;`
        - When applied to a pointer in a `printf`, this is 'peeks' at what is at that memory location.
            - Example `printf("%i\n", *p);`
    - %p: reference pointers in `printf`, prints the memory address of the variable. 

- Pointers: A variable that stores the address in memory of something.

- Pointer Arithmetic: Pointers, or memory address, can be incremented/decremented to increase to the next object in memory. 
    
- Malloc: Memory Allocation, a function that lets you pass in a number, how many bytes you want, and will return the reserved memeory address back to you.
    - NULL (the address 0) is returned when something goes wrong with allocating the memory. 
    - free: can be called to "free up" that memory

- Valgrind: a programming tool used for memory debugging, memory leak detection, and profiling. It primarily helps developers find issues.
    - Memory Leaks
    - Invalid Memory Access
    - Etc. 

- Passing By Reference/Address: Instead of passing in just the variables for functions that are no access in the global scope, you need to provide the **addresses** of those variable so they can retained globally in the program. 
    - Example `swap(&a, &b)`--> passing in the reference to the values of a and b variables, the swap function will dereference, *a and *b, to access the values at these memory locations and then perform a swap of the values at those locations. 

- Heap Overflow:

- Stack Overflow: So many functions are called on to the stack that it goes beyond the capacity of the 

- Buffer Overflow: Memory Overflow or accessing beyond the allocated memory. 

- File I/O: 
    1. fopen
    2. fclose
    3. fprintf
    4. fscanf
    5. fread
    6. frwrite
    7. fseek

- Bitmap File (BMF): 