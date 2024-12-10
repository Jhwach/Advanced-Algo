//If-Else Statements
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Example 1: Simple If-Else Statement with User Input
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number > 0) {
        cout << "The number is positive." << endl;
    } else {
        cout << "The number is not positive." << endl;
    }

    // Example 2: If-Else Ladder with User Input
    int marks;
    cout << "\nEnter your marks: ";
    cin >> marks;
    if (marks >= 90) {
        cout << "Grade: A+" << endl;
    } else if (marks >= 80) {
        cout << "Grade: A" << endl;
    } else if (marks >= 70) {
        cout << "Grade: B" << endl;
    } else if (marks >= 60) {
        cout << "Grade: C" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    // Example 3: Nested If-Else with User Input
    int age;
    char hasID;
    cout << "\nEnter your age: ";
    cin >> age;
    cout << "Do you have an ID? (y/n): ";
    cin >> hasID;
    if (age >= 18) {
        if (hasID == 'y' || hasID == 'Y') {
            cout << "You are allowed to enter." << endl;
        } else {
            cout << "You need an ID to enter." << endl;
        }
    } else {
        cout << "You are not allowed to enter." << endl;
    }

    // Example 4: Using If-Else for Odd-Even Check with User Input
    int num;
    cout << "\nEnter a number to check if it's odd or even: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is an even number." << endl;
    } else {
        cout << num << " is an odd number." << endl;
    }

    return 0;
}
