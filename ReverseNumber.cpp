#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, rev, digitCount, digit, multiplier;
    cout << "Enter the number: ";
    cin >> n;

    digitCount = int(log10(n));  // Calculate the number of digits - 1

    for (rev = 0; n > 0; n = n / 10)
    {
        digit = n % 10;           // Get the last digit
        multiplier = digit * pow(10, digitCount);  // Calculate the place value of the digit
        rev = rev + multiplier;   // Add the digit to the reversed number
        digitCount--;
    }

    cout << "Reversed number: " << rev << endl;
    return 0;
}
