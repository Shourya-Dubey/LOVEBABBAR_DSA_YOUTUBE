#include <iostream>
#include <vector>
using namespace std;
main()
{
    vector<int> v;

    // initailze vector with 1
    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // Copy vector
    vector<int> last(a);
    for (int i : last)
    {
        cout << i << " ";
    }
    cout << endl;

    v.push_back(1);
    cout << "capicity " << v.capacity() << endl;
    cout << "size " << v.size() << endl;

    v.push_back(2);
    v.push_back(3);
    cout << "capicity " << v.capacity() << endl;
    cout << "size" << v.size() << endl;

    cout << "first element " << v.front() << endl;
    cout << "last element " << v.back() << endl;

    cout << "Before Pop" << endl;
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "After pop" << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Before Clear Size =>" << v.size() << endl;
    v.clear();
    cout << "After Clear Size =>" << v.size() << endl;

    return 0;
}