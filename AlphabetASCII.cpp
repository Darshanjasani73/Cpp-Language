#include <iostream>
using namespace std;

int main()
{
    // Print lowercase alphabets with ASCII values
    cout << "Lowercase Alphabets with ASCII values:" << endl;
    for (char c = 'a'; c <= 'z'; ++c)
    {
        cout << c << ":" << int(c) << endl;
    }

    // Print uppercase alphabets with ASCII values
    cout << "Uppercase Alphabets with ASCII values:" << endl;
    for (char c = 'A'; c <= 'Z'; ++c)
    {
        cout << c << ":" << int(c) << endl;
    }

    return 0;
}
