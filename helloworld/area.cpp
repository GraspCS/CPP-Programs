#include <iostream>

using namespace std;

int main() {
    int length;
    int bredth;
    
    // here we do not need to write std:: prefix
    cout << "Enter length : ";
    cin >> length;

    cout << "Enter bredth : ";
    cin >> bredth;

    int area = length * bredth;

    cout << "Area = " << area;

    return 0;
}