#include<iostream>
using namespace std;

int main()
{
    int base, exponent, result = 1;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;

    int tempExponent = exponent;  // Preserve the original exponent value for the final output
    
    while (tempExponent > 0)
    {
        result *= base;
        tempExponent--;
    }
    
    cout << "The result of " << base << " raised to the power of " << exponent << " is " << result << endl;

    return 0;
}
