#include <iostream>
using namespace std;
int main () {
    
    float marksObtained, totalMarks, Percentage;
    cout << "Enter obtained marks: ";
    cin >> marksObtained;
    cout << "Enter total marks: ";
    cin >> totalMarks;
    Percentage = (marksObtained / totalMarks)*100;
    cout << "Percentage = " << Percentage << "%";

    return 0;
}
