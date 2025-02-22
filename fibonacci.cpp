#include <iostream>
#include <chrono>  // Include the chrono library for runtime calculation
using namespace std;
using namespace std::chrono;

// Function to generate Fibonacci series up to 'n' terms
void fibonacci(int n) {
    // Initialize the first two terms of the Fibonacci series
    int t1 = 0;  // First term of the series
    int t2 = 1;  // Second term of the series
    int nextTerm = 0;  // Variable to store the next term in the series

    // Print the first two terms of the series
    cout << t1 << ", " << t2 << ", ";

    // Loop to calculate the next terms in the series from the 3rd term onwards
    for (int i = 3; i <= n; ++i) {
        // Calculate the next term in the series as the sum of the previous two terms
        nextTerm = t1 + t2;  
        
        // Print the next term in the series
        cout << nextTerm << ", ";  
        
        // Update the previous terms for the next iteration
        t1 = t2;  // Update t1 to the value of t2
        t2 = nextTerm;  // Update t2 to the value of nextTerm
    }
}

int main() {
    int n;  // Variable to store the number of terms in the Fibonacci series
    
    // Prompt the user to enter the number of terms
    cout << "Enter the number of terms: ";  
    cin >> n;  // Read the number of terms from the user

    // Measure the start time of the Fibonacci calculation
    auto start = high_resolution_clock::now();

    cout << "Fibonacci Series: ";  // Print a label for the Fibonacci series
    fibonacci(n);  // Call the fibonacci function to generate the series

    // Measure the end time of the Fibonacci calculation
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);  // Calculate the duration in microseconds

    // Print the runtime of the Fibonacci calculation
    cout << "\nRuntime: " << duration.count() << " microseconds" << endl;

    return 0;  // Indicate that the program ended successfully
}
