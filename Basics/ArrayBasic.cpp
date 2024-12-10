//Arrays in C++
#include <iostream>
using namespace std;

int main() {
    // **Theory:**
    // An array is a collection of elements of the same data type stored in contiguous memory locations.
    // Arrays allow us to store multiple values under a single name and access them using an index.
    // The index of an array starts from 0. So, for an array of size 5, the indices will be from 0 to 4.

    // **Declaring and Initializing an Array:**
    // Here, we declare an array of 5 integers and initialize it with specific values.
    int numbers[5] = {10, 20, 30, 40, 50};

    // **Theory:**
    // The size of the array must be a constant expression, and once the size is declared, it cannot be changed.
    // In this case, 'numbers' is an array of 5 integers.
    // The elements of the array are initialized in the order they appear in the initializer list.
    
    // Accessing Array Elements by Index:
    // To access an element, use the array name followed by the index in square brackets.
    cout << "Element at index 0: " << numbers[0] << endl;  // Output: 10
    cout << "Element at index 1: " << numbers[1] << endl;  // Output: 20
    cout << "Element at index 2: " << numbers[2] << endl;  // Output: 30
    cout << "Element at index 3: " << numbers[3] << endl;  // Output: 40
    cout << "Element at index 4: " << numbers[4] << endl;  // Output: 50
    
    // **Theory:**
    // Arrays in C++ are 0-indexed, meaning the first element is accessed with index 0.
    // The last element is accessed with the index size - 1. In this case, index 4 is the last element.

    // **Modifying Array Elements:**
    // We can modify any element in the array by assigning a new value using its index.
    numbers[2] = 35;  // Modifying the element at index 2 (which was initially 30) to 35
    
    cout << "\nAfter modification, element at index 2 is: " << numbers[2] << endl;  // Output: 35

    // **Theory:**
    // Arrays can be modified by directly accessing the elements via their index.
    // We simply assign a new value to the specific index, and that value is updated in the array.

    // **Finding the Sum of Array Elements:**
    // Let's calculate the sum of the elements in the array manually (without using loops).
    int sum = numbers[0] + numbers[1] + numbers[2] + numbers[3] + numbers[4];
    cout << "\nThe sum of array elements is: " << sum << endl;  // Output: 140

    // **Theory:**
    // Arrays allow easy manipulation and processing of collections of data.
    // We can perform calculations or manipulations like summing the array elements directly by accessing them using their indices.

    // **2D Arrays:**
    // Arrays can also be multi-dimensional (like a matrix or table).
    // Here, we define a 2D array (array of strings representing fruits).
    char fruits[3][10] = {"Apple", "Banana", "Cherry"};

    // **Theory:**
    // A 2D array is essentially an array of arrays.
    // In this case, we have an array of 3 rows, where each row holds a string (maximum 9 characters).
    
    // Accessing 2D Array Elements:
    // Accessing elements in a 2D array involves using two indices: one for the row and one for the column.
    cout << "\nFirst fruit: " << fruits[0] << endl;  // Output: Apple
    cout << "Second fruit: " << fruits[1] << endl;  // Output: Banana
    cout << "Third fruit: " << fruits[2] << endl;   // Output: Cherry

    // **Theory:**
    // We can access each element in a 2D array by specifying both row and column indices.
    // In the example, `fruits[0]` refers to the first string ("Apple"), and so on.

    // **User Input and Array:**
    // Here, we accept 5 integers from the user and store them in an array.
    int userNumbers[5];
    cout << "\nEnter 5 numbers: ";
    for (int i = 0; i < 5; i++) {
        cin >> userNumbers[i];  // Storing user input in the array
    }

    // Displaying the user-entered numbers:
    cout << "You entered: ";
    for (int i = 0; i < 5; i++) {
        cout << userNumbers[i] << " ";  // Outputting each element in the array
    }
    cout << endl;

    // **Theory:**
    // We can use arrays to store user input. Since arrays are fixed-size, we must know the number of elements beforehand.
    // In this example, we take 5 integers as input and store them in the `userNumbers` array.

    return 0;
}
