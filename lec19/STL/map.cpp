#include <iostream>
#include <map>
using namespace std;
main()
{
    map<int, string> m;

    m[1] = "shouray";
    m[2] = "Dubey";
    m[5] = "Kumar";
    m[3] = "Akash";
    m.insert({4, "Deepak"});

    cout << "Before erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    cout << "Finding 4 => " << m.count(4) << endl;

    m.erase(1);
    cout << "After erase" << endl;
    for (auto i : m)
    {
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(3);
    for (auto i = it; i != m.end(); i++)
    {
        cout << (*i).first << " " << endl;
    }
}