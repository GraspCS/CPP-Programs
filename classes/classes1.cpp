#include <iostream>

using namespace std;

class HelloClass {
    public:
        int a;
        int b;

        void sum() { 
            cout << "Sum = " << (a + b) << "\n";
        }

        void diff() {
            cout << "Difference = " << (a - b) << "\n";
        }
};

int main() {
    HelloClass hello1, hello2;

    hello1.a = 100;
    hello1.b = 20;

    hello2.a = 200;
    hello2.b = 40;

    hello1.sum();
    hello1.diff();

    hello2.sum();
    hello2.diff();

    return 0;
}