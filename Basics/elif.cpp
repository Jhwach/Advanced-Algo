//Elif Statement
#include<bits/stdc++.h>
using namespace std;

int main() {
    // Example: Determine the category of an animal based on user input
    string animal;
    cout << "Enter an animal name: ";
    cin >> animal;

    if (animal == "dog") {
        cout << "This is a domestic animal." << endl;
    } else if (animal == "cat") {
        cout << "This is a domestic animal." << endl;
    } else if (animal == "lion") {
        cout << "This is a wild animal." << endl;
    } else if (animal == "elephant") {
        cout << "This is a wild animal." << endl;
    } else {
        cout << "Animal category not recognized." << endl;
    }

    return 0;
}
