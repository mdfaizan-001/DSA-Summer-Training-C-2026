#include <iostream>
using namespace std;
int main() {
    
    int arr[5];
    bool isAscending = true;
    cout << "Enter 5 num:\n";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < 5; i++) {
        if (arr[i] < arr[i - 1]) {
            isAscending = false;
            break;
        }
    }
    
    if (isAscending) {
        cout << "The array is in ascending order." << endl;
    } else {
        cout << "The array is not in ascending order." << endl;
    }
    
    return 0;
}
