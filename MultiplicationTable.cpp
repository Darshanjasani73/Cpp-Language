#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number: ";
    cin >> n;

    cout << "Multiplication table of " << n << " is:" << endl;
    for (int i = 1; i <= 10; ++i)
    {
        int product = i * n;  // Calculate the product
        cout << n << " * " << i << " = " << product << endl;
    }

    return 0;
}
