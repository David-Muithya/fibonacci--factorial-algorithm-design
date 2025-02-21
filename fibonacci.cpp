#include <iostream>  // Standard library for input/output
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
// The Fibonacci sequence starts with 0 and 1, and each subsequent number is the sum of the previous two.
// e.g., Fibonacci(5) = Fibonacci(4) + Fibonacci(3), where Fibonacci(4) = 3 and Fibonacci(3) = 2, so Fibonacci(5) = 5
int fibonacci(int n) {
    // Base case: the first Fibonacci number is 0, and the second is 1
    if (n == 0) {
        return 0;  // Fibonacci(0) is 0
    } else if (n == 1) {
        return 1;  // Fibonacci(1) is 1
    } else {
        // Recursive case: Fibonacci(n) = Fibonacci(n - 1) + Fibonacci(n - 2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

// Function to display the Fibonacci series up to the nth term
void fibonacciSeries(int n) {
    cout << "Fibonacci series up to the " << n << "th term: ";
    for (int i = 0; i < n; i++) {
        cout << fibonacci(i) << " ";  // Call fibonacci for each term
    }
    cout << endl;
}

int main() {
    int num;

    // Ask user for the number of terms in the Fibonacci series
    cout << "Enter the number of terms in Fibonacci series: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a non-negative number.\n";  // Handle negative input
    } else {
        fibonacciSeries(num);  // Display Fibonacci series
    }

    return 0;  // End of the program
}
