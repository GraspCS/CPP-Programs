#include <iostream>

using namespace std;

int main() {

    // we'll be doing it with nested for loops
    for(int i = 1; i <= 3; ++i) {
        for (int j = 3; j >= i; --j) {
            cout << " ";
        }

        for (int k = 1; k <= i; ++k) {
            cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}