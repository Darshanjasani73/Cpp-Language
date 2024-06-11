#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, lastDigit, firstDigit, temp, swappedNumber, digitCount = 0;
    cout << "Enter the number: ";
    cin >> n;
    temp = n;

    lastDigit = temp % 10;  // Extract the last digit
    digitCount = (int)log10(temp); // Calculate the number of digits - 1

    // Move to the first digit of the number
    while (temp >= 10)
    {
        temp /= 10;
    }
    firstDigit = temp;  // Extract the first digit

    // Swap the first and last digits and construct the new number
    swappedNumber = (lastDigit * pow(10, digitCount) + firstDigit) + (n - (firstDigit * pow(10, digitCount) + lastDigit));

    // Output the swapped number
    cout << "Swapped number: " << swappedNumber << endl;

    return 0;
}
