#include <iostream>
using namespace std;

int main() {
    int arr[5], search, found =0;

    cout << "Enter 5 num:\n";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> search;

    for (int i = 0; i < 5; i++) {
        if (arr[i] == search) {
            found = 1;
            break;
        } 
    }

    if (found) {
        cout << "Element found." << endl;
    } else {
        cout << "Element not found." << endl;
    }

    return 0;
}