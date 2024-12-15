// To Calculate the sum of numbers from 1 to N

#include<iostream>
using namespace std;

int main(){
    int N, sum = 0;  // Declare N for input and sum to store the result
    cout << "Enter The Value for N: ";
    cin >> N;        // Input value of N

    for (int i = 1; i <= N; i++) {  // Loop from 1 to N
        sum += i;   // Add current value of i to sum
    }

    cout << "Sum of numbers from 1 to " << N << " is: " << sum << endl;

    return 0;
}
