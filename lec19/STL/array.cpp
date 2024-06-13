#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 5> a = {1, 2, 3, 4, 5};

    int size = a.size();
    for (int i = 0; i < size; i++)
    {
        cout << a[i] << endl;
    }

    cout << "Element at 2nd Index => " << a.at(2) << endl;
    cout << "array is Empty or not ? " << a.empty() << endl;
    cout << "array first Element " << a.front() << endl;
    cout << "array last Element " << a.back();
    return 0;
}