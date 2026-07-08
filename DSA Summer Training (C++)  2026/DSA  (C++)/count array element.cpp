#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int count = sizeof(arr) / sizeof(arr[0]);

    cout << "Total number of elements = " << count;

    return 0;
}