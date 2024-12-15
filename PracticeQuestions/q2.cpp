// Find whether the number is odd or even

#include<iostream>
using namespace std;

int main(){
    int num;
    cout << "Enter the value for num"<< endl;
    cin >> num;

    if (num%2==0){
        cout << "Even Number" << endl;
    }else if (num%2!=0){
        cout << "Odd Number" << endl;
    }else {
        cout << "they live in nothing ness" << endl;
    }

    return 0;
}
