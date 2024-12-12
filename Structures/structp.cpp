// another example of structures with functions , pointers and dynamic memory allocation
#include <iostream>
using namespace std;

// Structure definition
struct Person {
    string name;
    int age;
    
    // Function to display person details
    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Function to dynamically allocate memory for a Person structure
Person* createPerson(string name, int age) {
    Person* newPerson = new Person;  // dynamically allocate memory for Person
    newPerson->name = name;
    newPerson->age = age;
    return newPerson;
}

int main() {
    // Create a new person using dynamic memory allocation
    Person* p1 = createPerson("Alice", 30);
    
    // Display person details using pointer
    p1->display();
    
    // Deallocate memory
    delete p1;
    
    return 0;
}
