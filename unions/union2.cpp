#include <iostream>

using namespace std;

union MyUnion {
    int a;
    float b;
};

int main () {
    MyUnion mu;

    mu.a = 4;
    cout << "The value of a is " << mu.a << "\n";

    mu.b = 5.5;
    cout << "Now the value of a is " << mu.a << "\n";
    cout << "The value of b is " << mu.b << "\n";

    return 0;
}