#include <iostream>
#include <queue>
using namespace std;
main()
{
    queue<string> q;

    q.push("Shourya");
    q.push("Deepak");
    q.push("Dubey");

    cout << "First Element => " << q.front() << endl;
    q.pop();
    cout << "First Element => " << q.front() << endl;

    cout << "Size of Queue => " << q.size() << endl;

    return 0;
}