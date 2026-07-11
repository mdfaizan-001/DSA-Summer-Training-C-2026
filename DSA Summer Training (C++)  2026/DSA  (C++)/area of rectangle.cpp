#include <iostream>
using namespace std;

int main() {
    float length,breadth,area;
    cout << "Enter the Length: ";
    cin >> length;

    cout << "Enter the breadth: ";
    cin >> breadth;

    area = length * breadth;
    cout << "Area of rectangle is = " << area;
    
    return 0;
}
