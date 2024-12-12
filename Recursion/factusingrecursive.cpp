// Factorial of 10 using recursive Approach

#include<bits/stdc++.h>
using namespace std;

// Function to calculate factorial recursively
int factorialRecursive(int n);

int main() {
    int number = 10;

    // Calculate factorial using recursive approach
    int resultRecursive = factorialRecursive(number);

    // Output the result
    cout << "Factorial of " << number << " (Recursive): " << resultRecursive << endl;

    return 0;
}

int factorialRecursive(int n) {
    if(n == 0 || n == 1) { 
        // Base case: factorial of 0 or 1 is 1
        return 1;
    }
    return n * factorialRecursive(n - 1); // Recursive case: n * factorial(n-1)
}
