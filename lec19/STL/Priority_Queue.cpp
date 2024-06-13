#include <iostream>
#include <queue>
using namespace std;
main()
{
    // Max heap
    priority_queue<int> max;

    // Min heap
    priority_queue<int, vector<int>, greater<int>> min;

    max.push(1);
    max.push(5);
    max.push(3);
    max.push(2);

    cout << "Size => " << max.size() << endl;
    int m = max.size();
    for (int i = 0; i < m; i++)
    {
        cout << max.top() << " ";
        max.pop();
    }
    cout << endl;

    min.push(1);
    min.push(5);
    min.push(3);
    min.push(2);

    int n = min.size();
    for (int i = 0; i < n; i++)
    {
        cout << min.top() << " ";
        min.pop();
    }
    cout << endl;
    return 0;
}