#include <iostream>
using namespace std;

int lenght(char ch[])
{
    int count = 0;
    for (int i = 0; ch[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

bool palindrom(char name[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s < e)
    {
        if (name[s] != name[e])
        {
            return false;
        }
        else
        {
            s++;
            e--;
        }
    }
    return true;
}
main()
{
    char name[10];
    cout << "Enter the name -> ";
    cin >> name;

    int len = lenght(name);

    cout << palindrom(name, len);

    return 0;
}