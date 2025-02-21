#include <iostream>  // Standard library for input/output
using namespace std;

// Function to calculate the factorial of a number using recursion
// A factorial of a non-negative integer n is the product of all positive integers less than or equal to n.
// e.g., factorial(5) = 5 * 4 * 3 * 2 * 1 = 120
// Factorial of 0 is defined as 1 (base case).
int factorial(int n) {
    // Base case: if n is 0, return 1 (since 0! = 1)
    if (n == 0) {
        return 1;
    } else {
        // Recursive case: n * factorial(n - 1)
        return n * factorial(n - 1);
    }
}

int main() {
    int num;

    // Ask user for input
    cout << "Enter a number to calculate its factorial: ";
    cin >> num;

    // Ensuring the number is non-negative
    if (num < 0) {
        cout << "Factorial is not defined for negative numbers.\n";
    } else {
        // Calculate and display the factorial
        cout << "Factorial of " << num << " is " << factorial(num) << endl;
    }

    return 0;  // End of the program
}
