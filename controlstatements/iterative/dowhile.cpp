#include <iostream>

using namespace std;

int main () {
    int n = 1;

    // here the condition is true so it'll be executed
    do {
        cout << "n = " << n << "\n";
        ++n;
    } while (n <= 5);

    return 0;
}