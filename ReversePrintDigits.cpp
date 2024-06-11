#include <iostream>
using namespace std;

int main()
{
    int number, digit;
    cout << "Enter the number: ";
    cin >> number;

    // Loop until all digits are printed
    while (number > 0)
    {
        digit = number % 10;  // Extract the last digit
        cout << digit;        // Print the digit
        number /= 10;         // Remove the last digit
    }
    cout << endl;

    return 0;
}
