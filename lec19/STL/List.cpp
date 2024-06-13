#include <iostream>
#include <list>
using namespace std;
main()
{
    list<int> l;
    l.push_back(2);
    l.push_front(1);
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    l.erase(l.begin());
    cout << "Afrer erase" << endl;
    for (int i : l)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Size of List => " << l.size() << endl;
    return 0;
}