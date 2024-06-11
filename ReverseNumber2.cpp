#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, rev = 0, c, digit;
    cout << "Enter the number: ";
    cin >> n;

    // Calculate the number of digits minus one
    c = int(log10(n));

    while (n > 0)
    {
        digit = n % 10;          // Get the last digit
        rev += digit * pow(10, c); // Add the digit to the reversed number
        c--;                     // Decrement the place value
        n /= 10;                 // Remove the last digit from n
    }

    cout << "Reversed number: " << rev << endl;

    return 0;
}
