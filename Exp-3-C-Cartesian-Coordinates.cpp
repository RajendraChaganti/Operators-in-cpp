// Rajendra Chaganti
// PRN : 24070123150
// B3 
#include <iostream>
using namespace std;
int main() {
    float x, y;  // Variables to store x and y coordinates
    // Take input from the user
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;
    // Check if the point is at origin
    if (x == 0 && y == 0)
        cout << "Point is at the Origin.";
    // Check if point lies on Y-axis (but not at origin)
    else if (x == 0)
        cout << "Point lies on the Y-axis.";
    // Check if point lies on X-axis (but not at origin)
    else if (y == 0)
        cout << "Point lies on the X-axis.";
    // Check for 1st quadrant (x > 0, y > 0)
    else if (x > 0 && y > 0)
        cout << "Point lies in the First Quadrant.";
    // Check for 2nd quadrant (x < 0, y > 0)
    else if (x < 0 && y > 0)
        cout << "Point lies in the Second Quadrant.";
    
    // Check for 3rd quadrant (x < 0, y < 0)
    else if (x < 0 && y < 0)
        cout << "Point lies in the Third Quadrant.";
    
    // Remaining case: 4th quadrant (x > 0, y < 0)
    else
        cout << "Point lies in the Fourth Quadrant.";

    return 0; // End of program
}
/*
Output
Enter X coordinate: 3
Enter Y coordinate: -4
Point lies in the Fourth Quadrant.
*/
