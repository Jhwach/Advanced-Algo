// Iterative Approach in C++

#include<bits/stdc++.h> // Include all standard C++ libraries for simplicity
using namespace std;

// Function prototype declaration for 'walk'
// This informs the compiler that a function named 'walk' exists and takes an integer parameter
void walk(int steps);
 
int main() {
    // Calling the 'walk' function with 4 steps
    walk(4);

    return 0; // Indicate that the program ended successfully
}

// Definition of the 'walk' function
// This function takes an integer 'steps' as input and performs an action for each step
void walk(int steps) {
    // Loop that runs 'steps' times
    for(int i = 0; i < steps; i++) {
        // Print a motivational message to the console
        cout << "Let's Touch Some Grass" << endl;
    }
}
