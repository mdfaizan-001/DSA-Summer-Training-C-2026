#include <iostream>
using namespace std;

int main() {
    int n;
    float num, sum = 0, average;
    cout << "Enter the number of values: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;
        sum += num;
    }
    average = sum / n;
    cout << "Average: " << average;
    return 0;
}
