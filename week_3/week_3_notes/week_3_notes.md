# Week 3: Algorithms #

- Algorithm: Step by step instructions for solving some specific type of problem.

    - Linear Search: 
        - Example:
            "For each door from left to right
                If 50 is behind door
                    Return true
            Return False"
    
    - Binary Search:
        - Example:
            "If no doors left
                Return false
            If 50 is behind doors[middle]
                Return true
            Else if 50 < doors[middle]
                Search doors[0] through doors[middle - 1]
            Else if 50 > doors[middle]
                Search doors[middle + 1] through doors[n - 1]"
    
- Runningtime: A physical count of the number of operations an algorithm takes in its run. 

- Constant Values: Values that alter the runtime of an algorithm in a minor way, and are therefore ignored in reporting the overall runningtime.
    - Example:
        - O(2 * n) vs. O(n) --> The multiple of 2 very slightly 

- Big Oh Notation: The "Worst Case" running time of an algorithm respectively. The "upper bound".

    1. O(n^2) --> Quadratic 
    2. O(n * log(n))
    3. O(n) --> Linear --> 
    4. O(log(n)) --> Logarithmic --> Binary Search
    5. O(1)

- Big Omega Notation: The "Base Case" running time of an algorithm respectively. The "lower bound".

    1. Omega(n^2)
    2. Omega(n * log(n))
    3. Omega(n)
    4. Omega(log(n))
    5. Omega(1)

- Big Theta Notation: When Big Oh and Big Omega are exactly the same. 

    1. Theta(n^2)
    2. Theta(n * log(n))
    3. Theta(n)
    4. Theta(log(n))
    5. Theta(1)

- Asymptotic Notation: A mathematical tool used to describe the behavior/runningtime of algorithms over time as input becomes very large.

- Data Structures:
    - Example: 
    ```
    typedef struct
    {
        string name;
        string number;
    }
    ```

- Sorting: 

    1. Selection Sort: 
        - Runtime:
            - Big Oh: O(n^2) --> Worst Case
            - Big Omega: Omega(n^2) --> Best Case
            - Big Theta: Theta(n^2) --> Big Oh and Big Omega
        - Example:
            For i from 0 to n - 1
                Find smallest number between numbers[i] and numbers[n - 1]
                Swap smalles number with numbers[i]
   2. Bubble Sort:
        - Runtime:
            - Big Oh: O(n^2) --> Worst Case
            - Big Omega: Omega(n) --> Best Case (one pass through n to see if its already sorted)
            - Big Theta:
        - Example:
            Repeat n times
                For i from 0 to n-2
                    If numbers[i] > numbers[i+1]
                        Swap them
                If no swaps
                    Quit
    3. Merge Sort:
        - Runtime:
            - Big Oh: O(n * log(n))
            - Big Omega: Omega(n * log(n))
            - Big Theta: Theta(n * log(n))
        - Example:
            If only one number
                Quit
            Else
                Sort left half of numbers
                Sort right half of numbers
                Merge sorted halves 

- Recursion: An alogrithm that calls upon itself with the process of the task. 
    - Base Case: The logic "bottoms out" and no more recursions or work can be done and the recursion and then "unfold" or cease. 
    - Example: 