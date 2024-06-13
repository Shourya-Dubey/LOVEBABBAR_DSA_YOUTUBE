#include <iostream>
#include <stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("Shourya");
    s.push("Deepak");
    s.push("Dubey");

    cout << "Top Element => " << s.top() << endl;
    s.pop();
    cout << "Top Element After Pop => " << s.top() << endl;

    cout << "Size of stack " << s.size() << endl;
    cout << "Empty or not ? " << s.empty() << endl;
    return 0;
}