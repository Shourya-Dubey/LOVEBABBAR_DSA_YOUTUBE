#include <iostream>
#include <set>
using namespace std;
main()
{
    set<int> s;
    s.insert(5);
    s.insert(2);
    s.insert(1);
    s.insert(5);
    s.insert(3);
    s.insert(4);

    for (auto i : s)
    {
        cout << i << endl;
    }
    cout << endl;

    cout << "5 is present or not ? " << s.count(5) << endl;

    set<int>::iterator itr = s.find(2);
    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
    return 0;
}