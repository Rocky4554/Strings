#include <iostream>
#include <string>
using namespace std;

void words(string str, int len)
{
    string result = "";  // Initialize as empty string
    for (int i = 0; i < len; i++)
    {
        if (str[i] != ' ')
        {
            result += str[i];
        }
        else
        {
            if (result != "")
            {
                cout << result << endl;
                result = "";
            }
        }
    }
}

int main()
{
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    cout << "The total words:" << endl;
    str = str + ' ';  // Add space to ensure last word is printed

    int len = str.length();
    cout << "Words in the string are:" << endl;
    words(str, len);  // Just call the function, don't try to print its return

    return 0;
}