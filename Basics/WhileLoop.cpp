//While Loop in C++
#include <iostream>
using namespace std;

int main() {
    // **Theory:**
    // A 'while' loop repeats a block of code as long as a given condition is true.
    // It checks the condition before each iteration.
    // The loop runs until the condition evaluates to false.
    
    // Example 1: Simple While Loop (Print numbers from 1 to 5)
    cout << "Example 1: Simple While Loop" << endl;
    int i = 1;
    while (i <= 5) {
        cout << "i = " << i << endl;
        i++;  // Increment the value of i after each iteration
    }

    // **Explanation for Example 1:**
    // 1. Initialization: `int i = 1;` - The loop starts with `i` equal to 1.
    // 2. Condition: `i <= 5;` - The loop continues as long as `i` is less than or equal to 5.
    // 3. Increment: `i++;` - After each iteration, `i` increases by 1.
    // This will print the numbers from 1 to 5.

    // Example 2: While Loop with Array (Sum of Elements in Array)
    cout << "Example 2: While Loop with Array" << endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int j = 0;

    // Loop through the array to calculate the sum
    while (j < 5) {
        sum += numbers[j];  // Add each element of the array to sum
        j++;  // Increment the index after each iteration
    }
    cout << "Sum of array elements: " << sum << endl;

    // **Explanation for Example 2:**
    // 1. Initialization: `int j = 0;` - We start with `j` equal to 0, the index of the first element in the array.
    // 2. Condition: `j < 5;` - The loop runs until `j` is less than 5 (the number of elements in the array).
    // 3. Increment: `j++;` - After each iteration, `j` is increased by 1.
    // Inside the loop, we access the array element using `numbers[j]` and add it to `sum`.

    // Example 3: While Loop to Find Factorial of a Number
    cout << "Example 3: Find Factorial of 5" << endl;
    int number = 5;
    int factorial = 1;

    while (number > 0) {
        factorial *= number;  // Multiply the current factorial by the number
        number--;  // Decrease the value of number after each iteration
    }
    cout << "Factorial of 5 is: " << factorial << endl;

    // **Explanation for Example 3:**
    // 1. Initialization: `int number = 5;` - We start with the number 5, for which we want to find the factorial.
    // 2. Condition: `number > 0;` - The loop continues as long as `number` is greater than 0.
    // 3. Decrement: `number--;` - After each iteration, `number` is decreased by 1.
    // The body of the loop multiplies the current factorial by the number at each step.

    return 0;
}
