// To check whether the number is Prime or not:
#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the number: ";
    cin >> num;

    bool isPrime = true;

    if (num <= 1) {
        isPrime = false; // Numbers <= 1 are not prime
    } else {
        for (int i = 2; i * i <= num; i++) {  // Check up to sqrt(num)
            if (num % i == 0) {
                isPrime = false;
                break; // Exit loop if a divisor is found
            }
        }
    }

    if (isPrime)
        cout << num << " is a prime number." << endl;
    else
        cout << num << " is not a prime number." << endl;

    return 0;
}
