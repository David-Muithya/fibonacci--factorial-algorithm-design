#include <iostream>
#include <chrono>  // Include the chrono library for runtime calculation
using namespace std;
using namespace std::chrono;

// Function to calculate the factorial of a number 'n'
int factorial(int n) {
    int fact = 1;  // Initialize the factorial value to 1

    // Loop to multiply each number from 1 to 'n'
    for (int i = 1; i <= n; ++i) {
        fact *= i;  // Multiply 'fact' by the current number 'i'
    }

    return fact;  // Return the calculated factorial value
}

int main() {
    int n;  // Variable to store the input number
    
    // Prompt the user to enter a number
    cout << "Enter a number: ";  
    cin >> n;  // Read the input number from the user

    // Measure the start time of the factorial calculation
    auto start = high_resolution_clock::now();

    int result = factorial(n);  // Call the factorial function to calculate the factorial

    // Measure the end time of the factorial calculation
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);  // Calculate the duration in microseconds

    // Print the calculated factorial value
    cout << "Factorial of " << n << " = " << result << endl;

    // Print the runtime of the factorial calculation
    cout << "Runtime: " << duration.count() << " microseconds" << endl;

    return 0;  // Indicate that the program ended successfully
}
