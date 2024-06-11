#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int Maxn = INT_MIN;
    int Minn = INT_MAX;
    for (i = 0; i < n; i++)
    {
        Maxn = max(Maxn, arr[i]);
        Minn = min(Minn, arr[i]);
    }
    cout << "Maximum element: " << Maxn << endl;
    cout << "Minimum element: " << Minn << endl;
    return 0;
}
