#include <iostream>
using namespace std;

int main()
{
    int num, firstDigit, lastDigit, sum;
    cout << "Enter the number: ";
    cin >> num;

    lastDigit = num % 10; // Extract the last digit
    firstDigit = num;     // Initialize firstDigit with the original number

    // Move to the first digit of the number
    while (firstDigit >= 10)
    {
        firstDigit /= 10;
    }

    cout << "First digit: " << firstDigit << endl;
    cout << "Last digit: " << lastDigit << endl;

    sum = firstDigit + lastDigit;
    cout << "Sum of the first and last digit: " << sum << endl;

    return 0;
}
