#include <iostream>

using namespace std;

// A simple structure
struct MyStruct {
    int a;
    float b;
    long long c;
};

// A simple union with same data members
union MyUnion {
    int a;
    float b;
    long long c;
};

int main() {
    MyStruct myStruct;
    MyUnion myUnion;

    cout << "The size of struct is = " << sizeof(myStruct) << "\n";
    cout << "The size of union is = " << sizeof(myUnion) << "\n";

    return 0;
}