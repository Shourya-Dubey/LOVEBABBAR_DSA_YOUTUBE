#include <iostream>
using namespace std;
int length(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = (ch - 'A') + 'a';
        return temp;
    }
}

bool isPalindrom(char ch[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        if (toLowerCase(ch[s]) != toLowerCase(ch[e]))
        {
            return 0;
        }
        else
        {
            s++;
            e--;
        }
    }
    return 1;
}
main()
{
    char name[10];
    cout << "Enter the name " << endl;
    cin >> name;

    cout << name << endl;

    int len = length(name);

    cout << "Convert" << name << " to lower case " << endl;
    cout << name << " is palindrom -> " << isPalindrom(name, len) << endl;
    cout << tolower('B');
    return 0;
}