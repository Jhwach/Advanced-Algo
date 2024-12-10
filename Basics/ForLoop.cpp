//For-Loop Cpp
#include <iostream>
using namespace std;

int main() {
    // **Theory:**
    // A 'for' loop is used to repeat a block of code a specific number of times.
    // It consists of three parts: 
    // 1. Initialization: The starting point (runs only once).
    // 2. Condition: The loop will continue to run as long as this condition is true.
    // 3. Increment/Decrement: Changes the value of the loop variable after each iteration.

    // Example 1: Simple For Loop (Print numbers from 1 to 5)
    cout << "Example 1: Simple For Loop" << endl;
    for (int i = 1; i <= 5; i++) {
        // Prints the value of i in each iteration
        cout << "i = " << i << endl;
    }

    // **Explanation for Example 1:**
    // 1. Initialization: `int i = 1;` - We start with `i` equal to 1.
    // 2. Condition: `i <= 5;` - The loop will continue as long as `i` is less than or equal to 5.
    // 3. Increment: `i++` - After each iteration, `i` is increased by 1.
    // This will print the numbers from 1 to 5.

    // Example 2: For Loop with Array (Sum of Elements in Array)
    cout << "Example 2: For Loop with Array" << endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    // Loop through the array to calculate the sum
    for (int i = 0; i < 5; i++) {
        sum += numbers[i];  // Add each element of the array to sum
    }
    cout << "Sum of array elements: " << sum << endl;

    // **Explanation for Example 2:**
    // 1. Initialization: `int i = 0;` - We start with `i` equal to 0, the index of the first element in the array.
    // 2. Condition: `i < 5;` - The loop runs until `i` is less than 5 (the number of elements in the array).
    // 3. Increment: `i++` - After each iteration, `i` is increased by 1.
    // Inside the loop, we access the array element using `numbers[i]` and add it to `sum`.

    // Example 3: For Loop to Print a Multiplication Table of 5
    cout << "Example 3: Multiplication Table of 5" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "5 * " << i << " = " << 5 * i << endl;
    }

    // **Explanation for Example 3:**
    // This for loop prints the multiplication table of 5.
    // 1. Initialization: `int i = 1;` - We start with `i` equal to 1 (the first number to multiply).
    // 2. Condition: `i <= 10;` - The loop continues as long as `i` is less than or equal to 10.
    // 3. Increment: `i++` - After each iteration, `i` increases by 1.
    // The body of the loop multiplies 5 by `i` and prints the result.

    return 0;
}
