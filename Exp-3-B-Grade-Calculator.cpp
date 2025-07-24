// Rajendra Chaganti
// PRN:24070123150
// B3 
// Experiment 3B Grade Calculator 
#include <iostream>
using namespace std;
int main() {
    int math, phy, chem, geo, hin, mar; // Variables to store marks for 6 subjects
    float avg; // Variable to store average marks
    // Taking input marks for each subject
    cout << "Enter marks for:\n";
    cout << "mathematics: ";      cin >> math;
    cout << "physics: ";   cin >> phy;
    cout << "chemistry: "; cin >> chem;
    cout << "geography: "; cin >> geo;
    cout << "hindi: "; cin >> hin;
    cout << "marathi: "; cin >> mar;
    // Calculate average of all 6 subjects
    avg = (math + phy + chem + geo + hin + mar) / 6.0;
    // Display the average
    cout << "Average Marks: " << avg << endl;
    // Grade calculation based on average marks
    if (avg >= 90)
        cout << "Grade: A";
    else if (avg >= 80)
        cout << "Grade: B";
    else if (avg >= 70)
        cout << "Grade: C";
    else if (avg >= 60)
        cout << "Grade: D";
    else
        cout << "Grade: F (Fail)";
    return 0; // End of program
}
/*
Output
Enter marks for:
mathematics: 56
physics: 78
chemistry: 92
geography: 93
hindi: 11
marathi: 86
Average Marks: 69.3333
Grade: D
*/
