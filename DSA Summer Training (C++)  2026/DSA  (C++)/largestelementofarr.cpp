#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 7, 23, 89};

    int largest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    cout << "Largest element: " << largest;

    return 0;
}