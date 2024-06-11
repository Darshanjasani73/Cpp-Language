#include <iostream>
using namespace std;

int main()
{
    int n, product = 1, digit;
    cout << "Enter the number: ";
    cin >> n;

    while (n != 0)
    {
        digit = n % 10;   // Get the last digit
        product *= digit; // Multiply the digit to the product
        n /= 10;          // Remove the last digit
    }

    cout << "Product of digits is: " << product << endl;

    return 0;
}
