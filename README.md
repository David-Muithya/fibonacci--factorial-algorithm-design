# fibonacci--factorial-algorithm-design
 fibonacci series and factorial codes using c++ to show algorithm design
# REG NUMBER: EB3/61536/22
# NAME: DAVID MUITHYA

# Factorial.cpp
Detailed Explanation:
Function factorial(int n):
This is a recursive function that calculates the factorial of n.
It calls itself with n - 1 until n == 0, where it returns 1 (base case).
Base Case: If n == 0, the factorial is defined as 1.
Recursive Case: Otherwise, it computes n * factorial(n - 1).

#Main Function:
Asks the user to input a non-negative number.
If the number is negative, it outputs an error message.
Otherwise, it computes the factorial and displays the result.

# fibonacci.cpp
 Detailed Explanation:
 Function fibonacci(int n):
This function calculates the nth Fibonacci number recursively.
The base cases are fibonacci(0) = 0 and fibonacci(1) = 1.
For any n > 1, it computes fibonacci(n - 1) + fibonacci(n - 2).

 Function fibonacciSeries(int n):
This function prints the Fibonacci series up to the nth term.
It uses a loop to call the fibonacci(i) function for each index i from 0 to n-1.

 Main Function:
Asks the user for the number of terms they want in the Fibonacci series.
If the number is negative, it displays an error message.
Otherwise, it calls fibonacciSeries(num) to print the Fibonacci sequence.

# Design of Algorithms:
 Fibonacci Series:
Time Complexity: O(n) — We calculate each Fibonacci number once.

Space Complexity: O(1) — The space usage is constant because we only use a fixed number of variables for storing the previous two terms. 

 Factorial:

Time Complexity: O(n) — We are making n recursive calls to compute the factorial.

Space Complexity: O(n) — The space complexity is due to the recursive calls that will be stored in the stack until the base case is reached.
