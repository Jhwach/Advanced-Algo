//Pointers in CPP

#include<bits/stdc++.h>
using namespace std;

int main(){



    //Pointers - variables that stores memory address of another variable
    //           sometimes it's easier to work with an address

    // & address-of operator
    // * deference operator

    string name = "Bro";
    int age = 21;
    string freePizzas[5] = {"pizza1","pizza2","pizza3","pizza4","pizza5"};
    string *pName = &name;
    int *pAge = &age;
    string *pFreePizzas = freePizzas;
    cout << *pName << endl;
    cout << *pAge << endl;
    cout << *freePizzas << endl;





    return 0;
}