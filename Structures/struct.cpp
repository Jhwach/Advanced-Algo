//Structures in CPP

#include<bits/stdc++.h>
using namespace std;
// Structures - Structures (also called structs) are a way to group several related variables into one place. 
//              Each variable in the structure is known as a member of the structure.
//              Unlike an array, a structure can contain many different data types (int, string, bool, etc.).

// Advantages - 1. Simple way to group related data together
//              2. Efficient in memory usage.
//              3. Easily accessible via the dot operator.

// Disadvantages - 1. Lacks advanced features like encapsulation, inheritance, and polymorphism.
//                 2. Members are public by default, which can lead to data exposure
//                 3. Less suitable for complex designs compared to classes

// Define a struct to represent a person
struct Person {
    string name;
    int age;
    float height;
};

int main() {
    // Create an instance of the struct
    Person person1;

    // Take input from the user
    cout << "Enter name: ";
    getline(cin, person1.name);

    cout << "Enter age: ";
    cin >> person1.age;

    cout << "Enter height: ";
    cin >> person1.height;

    // Access and print the struct members
    cout << "\nName: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    cout << "Height: " << person1.height << endl;

    return 0;
}
