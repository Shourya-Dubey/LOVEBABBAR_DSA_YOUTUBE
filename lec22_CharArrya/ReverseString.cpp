#include <iostream>
using namespace std;
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
};

void reverse(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s < e)
    {
        swap(name[s], name[e]);
        s++;
        e--;
    }
}
main()
{
    char name[10];
    cout << "Enter the name" << endl;
    cin >> name;

    int len = getLength(name);
    cout << "Lenght of name -> " << len << endl;

    cout << "Reverse the String -> ";
    reverse(name, len);

    cout << name << endl;

    return 0;
}