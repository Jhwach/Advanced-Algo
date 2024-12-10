//DoWhile Loop
#include <iostream>
using namespace std;

int main() {
    // **Theory:**
    // A 'do-while' loop is similar to a 'while' loop, but with one key difference:
    // The loop always executes the block of code at least once, 
    // because the condition is checked after the code is executed.
    
    // Example 1: Simple Do-While Loop (Print numbers from 1 to 5)
    cout << "Example 1: Simple Do-While Loop" << endl;
    int i = 1;
    do {
        cout << "i = " << i << endl;
        i++;  // Increment the value of i after each iteration
    } while (i <= 5);

    // **Explanation for Example 1:**
    // 1. Initialization: `int i = 1;` - The loop starts with `i` equal to 1.
    // 2. Code block: The code block inside the 'do' section is executed first.
    // 3. Condition: After executing the code block, the condition `i <= 5` is checked.
    // 4. Increment: `i++;` - After each iteration, `i` increases by 1.
    // This will print the numbers from 1 to 5.

    // Example 2: Do-While Loop with Array (Sum of Elements in Array)
    cout << "Example 2: Do-While Loop with Array" << endl;
    int numbers[] = {10, 20, 30, 40, 50};
    int sum = 0;
    int j = 0;

    // Loop through the array to calculate the sum
    do {
        sum += numbers[j];  // Add each element of the array to sum
        j++;  // Increment the index after each iteration
    } while (j < 5);
    cout << "Sum of array elements: " << sum << endl;

    // **Explanation for Example 2:**
    // 1. Initialization: `int j = 0;` - We start with `j` equal to 0, the index of the first element in the array.
    // 2. Code block: The code inside the 'do' section is executed first.
    // 3. Condition: After executing the code block, the condition `j < 5` is checked.
    // 4. Increment: `j++;` - After each iteration, `j` is increased by 1.
    // Inside the loop, we access the array element using `numbers[j]` and add it to `sum`.

    // Example 3: Do-While Loop to Find Factorial of a Number
    cout << "Example 3: Find Factorial of 5" << endl;
    int number = 5;
    int factorial = 1;

    do {
        factorial *= number;  // Multiply the current factorial by the number
        number--;  // Decrease the value of number after each iteration
    } while (number > 0);
    cout << "Factorial of 5 is: " << factorial << endl;

    // **Explanation for Example 3:**
    // 1. Initialization: `int number = 5;` - We start with the number 5, for which we want to find the factorial.
    // 2. Code block: The code inside the 'do' section is executed first.
    // 3. Condition: After executing the code block, the condition `number > 0` is checked.
    // 4. Decrement: `number--;` - After each iteration, `number` is decreased by 1.
    // The body of the loop multiplies the current factorial by the number at each step.

    return 0;
}
