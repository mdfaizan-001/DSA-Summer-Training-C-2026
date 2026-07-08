#include <iostream>
using namespace std;

int main() {
    int arr[5] = {12, 45, 7, 23, 89};

    int smallest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }

    cout << "Smallest element: " << smallest;

    return 0;
}