// Rajendra Chaganti
// PRN : 24070123150
// B3
// Experiment 3A : Positive or Negative 
#include <iostream>
using namespace std;
int main() {
    int num;
    // Ask user to enter a number
    cout << "Enter a number: ";
    cin >> num;
    // Check whether number is positive or negative using if-else conditions
    if (num > 0)
        cout << "The number is Positive.";
    else if (num < 0)
        cout << "The number is Negative.";
    else
        // If not positive or negative, it's zero
        cout << "The number is Zero (neither positive nor negative).";
    return 0;
}
/*
Output
Enter a number: -2
The number is Negative.
*/
