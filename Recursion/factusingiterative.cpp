// Factorial of 10 using Iterative Approach
#include<bits/stdc++.h>
using namespace std;

// Function to calculate factorial iteratively
int factorialIterative(int n);

int main() {
    int number = 10;

    // Calculate factorial using iterative approach
    int resultIterative = factorialIterative(number);

    // Output the result
    cout << "Factorial of " << number << " (Iterative): " << resultIterative << endl;

    return 0;
}

int factorialIterative(int n) {
    int result = 1; // Initialize result to 1
    for(int i = 1; i <= n; i++) {
        result *= i; // Multiply result by each number from 1 to n
    }
    return result; // Return the computed factorial
}
