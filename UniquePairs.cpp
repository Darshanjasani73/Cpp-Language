#include <iostream>
using namespace std;

int main()
{
    int n, i, j;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Unique pairs: " << endl;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] != arr[j])
            {
                cout << arr[i] << " " << arr[j] << endl;
            }
        }
    }
    
    return 0;
}
