#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);

    cout << "Finding 5 -> " << binary_search(v.begin(), v.end(), 5) << endl;

    int a = 3;
    int b = 5;
    cout << "max -> " << max(a, b) << endl;
    cout << "min -> " << min(a, b) << endl;

    swap(a, b);
    cout << "a-> " << a << endl;
    cout << "b-> " << b << endl;

    string str = "abcd";
    reverse(str.begin(), str.end());
    cout << str << endl;

    rotate(v.begin(), v.begin() + 1, v.end());
    cout << "After Rotate" << endl;
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}