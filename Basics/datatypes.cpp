//Datatypes
#include<bits/stdc++.h>
using namespace std;

int main() {
    // 1. Integer type (int) - Stores whole numbers.
    int integerExample = 42; // Example: 42
    cout << "Integer: " << integerExample << endl;

    // 2. Floating-point type (float) - Stores decimal numbers with single precision.
    float floatExample = 3.14f; // Example: 3.14
    cout << "Float: " << floatExample << endl;

    // 3. Double type (double) - Stores decimal numbers with double precision.
    double doubleExample = 3.14159265359; // Example: 3.14159
    cout << "Double: " << doubleExample << endl;

    // 4. Character type (char) - Stores a single character.
    char charExample = 'A'; // Example: 'A'
    cout << "Character: " << charExample << endl;

    // 5. Boolean type (bool) - Stores true or false values.
    bool boolExample = true; // Example: true
    cout << "Boolean: " << boolExample << endl;

    // 6. Wide character type (wchar_t) - Stores wide characters (for Unicode support).
    wchar_t wideCharExample = L'Ω'; // Example: 'Ω'
    wcout << L"Wide Character: " << wideCharExample << endl;

    // 7. Void type - Represents no type (used in functions).
    // Example: Void function would have no return value.

    // 8. Unsigned integer type (unsigned int) - Stores only positive whole numbers.
    unsigned int unsignedIntExample = 100; // Example: 100
    cout << "Unsigned Integer: " << unsignedIntExample << endl;

    // 9. Long integer type (long, long long) - Stores larger whole numbers.
    long longExample = 123456789L; // Example: 123456789
    cout << "Long: " << longExample << endl;

    long long longLongExample = 123456789012345LL; // Example: 123456789012345
    cout << "Long Long: " << longLongExample << endl;

    // 10. Short integer type (short) - Stores smaller integers.
    short shortExample = 32767; // Example: 32767
    cout << "Short: " << shortExample << endl;

    // 11. Constants (const) - Immutable values.
    const int constExample = 50; // Example: 50
    cout << "Constant: " << constExample << endl;

    // 12. Array type - Collection of elements of the same datatype.
    int arrayExample[5] = {1, 2, 3, 4, 5}; // Example: {1, 2, 3, 4, 5}
    cout << "Array: ";
    for (int i = 0; i < 5; ++i) {
        cout << arrayExample[i] << " ";
    }
    cout << endl;

    // 13. Pointer type (int*) - Stores the address of another variable.
    int* pointerExample = &integerExample; // Example: Pointer to integer
    cout << "Pointer: " << pointerExample << " -> Value: " << *pointerExample << endl;

    return 0;
}
