# Week 1: C #

- Machine Code: Sequences of 0's and 1's that are read in "patterns" to represent various characters, integers, or even instructions. 

- Compiler: Translator of english code to machine code.

- Graphical User Interface (GUI): Visual representation of code used to easily allow users to interact with buttons etc. 
- Command Line Interface (CLI): Using the terminal window to type commands to perform or run actions/scripts. 

To Run C Program in CS50 VS Code:
1. code filename.ext (source code)
2. make filename (compiler created file of the machine code)
3. ./filename (runs the compiled program)


Escape Sequences:
1. \n new line
2. \r
3. \" print quotation mark to screen
4. \'
5. \\ 

Header File: Written at the top of the file to give to access to "libraries".
    - Example: ```#include <stdio.h>```

- Libraries:
    1. stdio.h
    2. cs50.h (CS50 only) built in functions for CS50 codespace:
        - get_char
        - get_double
        - get_float
        - get_int
        - get_long
        - get_string (similar to the input() function in Python)

- Placeholders/Format Codes:
    - %c
    - %f
    - %i
    - %li
    - %s


- CLI Commands
    - cd: change directory
    - cp: copy
    - ls: list
    - mkdir: make directory/folder
    - mv: move
    - rm: remove
    - rmdir: remove directory

- Types:
    - bool
    - char: single characters
    - double
    - float
    - int: small whole numbers
    - long: integers but bigger/longer
    - string: words or phrases

- Conditionals:
    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is greater than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }

- Operators:
    1. =
    2. >
    3. >=
    4. <
    5. <=
    6. ==
    7. +
    8. -
    9. *
    10. /
    11. %
    12. || -> "or" (in Python)
    13. && -> "and" (in Python)
    14. i-- -> decrease i by one
    15. i++ -> increase i by one

- Variable: House data or information as a literal word representation. 
    - In C variables are declared their type before being defined. 
        - Example: ```int count = 0;```

- Loops:
    - for
    - while
    - do while: do an action for a long or while a condition is met/notmet. 

- Constants: variables that the compiler or users can change.
    - Example: ```const int n = 3```

- Comments: //

- Integer Overflow: exceeding the number of bits needed to call or represent a large integer value. 

- Truncation: overwriting a calculated value to represent an appropriate type.

- Floating-point Imprecision: 