#include <iostream>
#include <string.h>
#include <stack>
using namespace std;
stack<int> s;

int main()
{
    int size, n;
    char op[10];
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> op;
        if (!strcmp(op, "push"))
        {
            cin >> n;
            s.push(n);
        }

        if (!strcmp(op, "pop"))
        {
            if (!s.empty())
            {
                cout << s.top() << endl;
                s.pop();
            }
            else
                cout << -1 << endl;
        }

        if (!strcmp(op, "top"))
        {
            if (!s.empty())
                cout << s.top() << endl;
            else
                cout << -1 << endl;
        }

        if (!strcmp(op, "size"))
            cout << s.size() << endl;

        if (!strcmp(op, "empty"))
        {
            if (!s.empty())
            {
                cout << 0 << endl;
            }
            else
                cout << 1 << endl;
        }
    }
}