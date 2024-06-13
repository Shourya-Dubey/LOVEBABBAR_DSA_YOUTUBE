#include <iostream>
#include <deque>
using namespace std;
main()
{
    deque<int> d;
    d.push_back(2);
    d.push_front(1);

    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Element at 1st index => " << d.at(1) << endl;
    cout << "Element at 1st index => " << d.at(0) << endl;

    cout << "Front Element " << d.front() << endl;
    cout << "Front Element " << d.back() << endl;

    cout << "Before Erase size => " << d.size() << endl;
    d.erase(d.begin(), d.begin() + 1);
    cout << "After Erase size => " << d.size() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }

    d.pop_front();
    // d.pop_back();
    for (int i : d)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}