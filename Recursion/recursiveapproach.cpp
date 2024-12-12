// Recursive Approach in CPP

#include<bits/stdc++.h> // Include all standard C++ libraries for simplicity
using namespace std;

// Function prototype declaration for 'walk'
// This function uses recursion to print a message a given number of times
void walk(int steps);

int main() {
    // Calling the 'walk' function with 4 steps
    walk(4);

    return 0; // Indicate that the program ended successfully
}

// Definition of the 'walk' function
// This function recursively prints a motivational message for each step
void walk(int steps) {
    if(steps == 0) { 
        // Base case: If steps are 0, stop the recursion
        return;
    }

    // Print a motivational message
    cout << "Let's Touch Some Grass" << endl;

    // Recursive call with one less step
    walk(steps - 1);
}
