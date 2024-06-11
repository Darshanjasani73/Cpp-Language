#include <iostream>
using namespace std;

void Snum(int sn, int en)
{
    int n1, i, j, k, s1, fact;
    for (k = sn; k <= en; k++)
    {
        n1 = k;
        s1 = 0;
        for (j = k; j > 0; j = j / 10)
        {
            fact = 1;
            // Calculating factorial of the current digit
            for (i = 1; i <= j % 10; i++)
            {
                fact = fact * i;
            }
            // Adding factorial of the digit to the sum
            s1 = s1 + fact;
        }
        // Checking if the sum of factorials is equal to the original number
        if (s1 == n1)
            cout << n1 << "  **\n";
    }
}

int main()
{
    int a, b;
    cout << "Enter the 2 numbers: " << endl;
    cin >> a >> b;
    Snum(a, b);
    return 0;
}
