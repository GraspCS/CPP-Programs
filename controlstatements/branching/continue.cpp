#include <iostream>

using namespace std;

int main() {

    // here we want the loop to continue to next iteration when i = 5
    for (int i = 1; i <= 10; ++i) {
        if(i == 5) {
            continue;
        }

        cout << "i = " << i << "\n";
    }

    return 0;
}