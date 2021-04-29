#include <iostream>

using namespace std;

int main(){
    int age = 0;

    // enter is the name or label that we gave to use with goto
    enter:
        cout << "Enter your age :: ";
        cin >> age;

        if (age < 0) {
            goto enter;
        }

        cout << "Your age is " << age << " years";

    return 0;
}