#include <iostream>
using namespace std;

int strL(char *str);

int main()
{
    char text[70];
    int length;

    cout << "Enter the text: " << endl;
    cin.getline(text, 70);  // Using getline to handle spaces in the input

    length = strL(text);

    cout << "Text is: " << text << endl;
    cout << "Length is: " << length << endl;

    return 0;
}

int strL(char *str)
{
    int len = 0;
    while (str[len] != '\0') // Loop until the null terminator is reached
    {
        len++;
    }
    return len;
}
