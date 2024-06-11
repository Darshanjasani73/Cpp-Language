#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, i, x, k, m, ans;
    cout << "Enter the number: " << endl;
    cin >> n;
    
    for (i = 1; i <= n; i++)
    {
        x = i;
        ans = 0;
        
        // Calculate the sum of the 4th powers of the digits
        while (x != 0)
        {
            k = x % 10;            // Get the last digit
            m = pow(k, 4);         // Raise it to the 4th power
            ans += m;              // Add to the answer
            x = x / 10;            // Remove the last digit
        }
        
        // Compare the result to the original number
        if (ans == i)
        {
            cout << i << " is an Armstrong number." << endl;
        }
    }

    return 0;
}
