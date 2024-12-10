//User Input/Output 
#include <iostream>
using namespace std;

int main() {
    string name;
    int hours;

    cout << "Enter your name: ";
    cin >> name; // Input name
    cout << "How many hours do you study in a day? ";
    cin >> hours; // Input study hours

    cout << "Hello, " << name << "! You study for " << hours << " hours daily." << endl;

    return 0;
}


