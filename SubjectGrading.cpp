#include <iostream>
using namespace std;

int main()
{
    int physics, chemistry, math;
    float average;

    cout << "Enter marks of three subjects (Physics Chemistry Math): ";
    cin >> physics >> chemistry >> math;

    // Calculating average marks
    average = (physics + chemistry + math) / 3.0;

    cout << "Average marks: " << average << endl;

    // Grading
    if (average >= 80 && average <= 100)
    {
        cout << "Pass with grade: A" << endl;
    }
    else if (average >= 70 && average < 80)
    {
        cout << "Pass with grade: B" << endl;
    }
    else if (average >= 0 && average < 70)
    {
        cout << "Pass with grade: C" << endl;
    }
    else
    {
        cout << "Invalid average marks" << endl;
    }

    return 0;
}
