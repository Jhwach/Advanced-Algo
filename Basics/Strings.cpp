//Strings in Cpp
#include <iostream>
#include <string>  // Include the string header to use the string class
using namespace std;

int main() {
    // **Theory:**
    // In C++, a string is a sequence of characters.
    // C++ provides a string class that makes it easier to handle sequences of characters.
    // The string class automatically manages the size of the string and provides several useful functions.

    // **Declaring and Initializing a String**
    string greeting = "Hello, World!";  // String initialized with a value
    cout << "Greeting: " << greeting << endl;  // Output the string to the console

    // **Theory:**
    // You can assign values to strings directly using assignment operator (`=`).
    // A string can also be initialized when declared, like in the example above.

    // **Accessing Individual Characters of a String**
    // You can access the individual characters of a string using the index, similar to arrays.
    cout << "First character: " << greeting[0] << endl;  // Output: H
    cout << "Last character: " << greeting[greeting.length() - 1] << endl;  // Output: !

    // **Theory:**
    // Strings in C++ are zero-indexed, meaning the first character has an index of 0.
    // You can access individual characters by using the square bracket notation, like an array.

    // **Modifying a String**
    greeting[0] = 'h';  // Modify the first character
    cout << "Modified Greeting: " << greeting << endl;  // Output: hello, World!

    // **Theory:**
    // Strings in C++ allow modification of characters using indices.
    // The string class in C++ is mutable (modifiable), unlike character arrays in C.

    // **Concatenating Strings**
    string firstName = "John";
    string lastName = "Doe";
    string fullName = firstName + " " + lastName;  // Concatenate firstName and lastName with a space in between
    cout << "Full Name: " << fullName << endl;  // Output: John Doe

    // **Theory:**
    // You can concatenate strings using the `+` operator in C++.
    // The `+` operator combines two or more strings into a new string.

    // **Getting the Length of a String**
    int length = fullName.length();  // Get the length of the string
    cout << "Length of Full Name: " << length << endl;  // Output: 8

    // **Theory:**
    // The `.length()` function returns the number of characters in the string.
    // It's useful when you need to know the size of the string.

    // **User Input with Strings**
    string userInput;
    cout << "Enter your favorite color: ";
    getline(cin, userInput);  // Accepts input with spaces
    cout << "Your favorite color is: " << userInput << endl;

    // **Theory:**
    // `getline()` is used to read a full line of text, including spaces.
    // This is useful when you want the user to input a sentence or a multi-word string.

    // **Extracting a Substring from a String**
    string substring = fullName.substr(0, 4);  // Extract the first 4 characters from fullName
    cout << "Substring (first 4 characters): " << substring << endl;  // Output: John

    // **Theory:**
    // The `.substr(startIndex, length)` function extracts a part of the string.
    // It starts at `startIndex` and extracts `length` characters.
    // If `length` is omitted, it extracts from `startIndex` to the end of the string.

    return 0;
}
