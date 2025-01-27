# Week 2: Arrays #

- Reading Levels: 

- Cryptography:

- Encryption: Scrambling data or text in a reversible way.
    - Using some "plaintext" and a "key" you can output a new encrypted message.
    - Caesar Cipher: Using rotational encryption to "rotate" letters of the alphabet to represent *true* characters of the plaintext. 

- Compiling: 
    - Source code is entered into a complier that converts the source code to machine code, allowing the program to run on a computer. 
    - Clang: compiler used by CS50.
    - Steps of Compiling:
        1. Preprocessing: 
            - '#' is a preprocessor directive
            - header files are read and "copied" into your program for use.
            - removes comments and preps the file for compiling.
        2. Compiling: Translation of source code to *assembly code*.
            - Computer CPU can interpret assembly code.
        3. Assemblying: Translation of assembly code in step 2 to machine code, 0's and 1's. 
        4. Linking: Taking the machine code from the original '.c' file, the machine code from the header files, etc. and *linking* them together.

- Command Line Arguments: In addition to giving a command to run a program, inputs can/are also provided to alter various actions of the run.
    - ```int main(void)``` --> ```int main(int argc, string argv[])```

- Reverse Engineering: The hardware (CPU) manufacturer has a manual for their machine code "codes" and what they represent. 
    - Going through the effort of RE machine code may be counter-productive due to the effort needed. 

- Debugging: finding errors within your code. 
    - ```printf```is a common way to debug your code. 
        - use ```printf```statements deliberately to display what is going on "behind the scenes" of the code. 

- Debug50: Representative of VSCode Debugger tool. 
    - Command Line Arg: "debug50 ./filename.ext"
    - Breakpoint: a place where the code will pause when ran and 
    - Garbage Value: A reused value or place in memory that will be overridden in your current iteration. 

- Types: 
    1. bool --> 1 byte
    2. int 4 --> bytes
    3. long 8 --> bytes
    4. float 4 --> bytes
    5. double 8 --> bytes
    6. char 1 --> bytes
    7. string --> ? bytes, input dependent.

- Arrays: A sequence of values, contiguous in memeory, all of which have the same data type. 
    - ```int scores[3]``` --> creates an array ```scores``` with 3 available places to house data. 
    ```int scores[3];```
    ```scores[0] = 72;```
    ```scores[1] = 73;```
    ```scores[2] = 33;```
    - Arrays will reserve an extra byte to know where the array ends for a current string etc. Usually with an escape character to indicate the end like '\0' or NUL.
        - The use of double quotes when defining strings indicates the C to have a string array NUL ending. 
    
- String Length:
    - <string.h> --> strlen()

- Libraries:
    - <ctype.h>
        - isalnum
        - isalpha
        - isblank
        - etc.

- Cowsay: A 3rd party library used to print ASCII art. 

- Exit Status: Code returned by a program to the operating system when it terminates. It indicates the program's success or failure and helps other programs or scripts determine what happened during execution. 
    - ```echo $?``` --> will display the return code or exit status of a program if it has one. 

