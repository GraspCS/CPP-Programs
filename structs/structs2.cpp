#include <iostream>

using namespace std;

struct Rectangle {
    int width = 20;
    int height = 10;

    void area () {
        cout << "Area is = " << height * width << "\n";
    }
};

int main(){
    Rectangle rec;
    rec.area();

    rec.width = 40;
    rec.height = 30;
    rec.area();

    return 0;
}