#include <iostream>
using namespace std;
bool valid(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char toLowerCase(char ch)
{
    if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrom(string a)
{
    int s = 0;
    int e = a.length() - 1;
    while (s < e)
    {
        if (a[s] != a[e])
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
bool isPalindrome(string s)
{
    string str = "";

    // Removing non-alphanumeric character
    for (int i = 0; i < s.length(); i++)
    {
        if (valid(s[i]))
        {
            str.push_back(s[i]);
        }
    }

    // converting to lower case
    for (int i = 0; i < str.length(); i++)
    {
        str[i] = toLowerCase(str[i]);
    }

    cout << str << endl; // checking******

    // check palindrom
    return palindrom(str);
}
main()
{
    string s = "c1 O$d@eeD o1c";
    cout << isPalindrome(s);
    return 0;
}