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
}
main()
{
    char name[10];
    cout << "Enter Your Name ";
    cin >> name;

    // name[2] = '\0';

    cout << "Length of String is -> " << getLength(name) << endl;
    return 0;
}