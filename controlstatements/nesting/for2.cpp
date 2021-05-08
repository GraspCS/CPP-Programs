#include <iostream>

using namespace std;

int main() {

    // we'll be doing it with nested for loops
    for(int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 3; ++j) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}