#include <iostream>
#include <string>
#include <stack>

using namespace std;

string str;
stack<char> s;
int idx;
void print()
{
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}
int main()
{
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == ' ')
        {
            print();
            cout << ' ';
        }
        else if (str.at(i) == '<')
        {
            print();
            for (idx = i; idx < str.size(); ++idx)
            {
                cout << str.at(idx);
                if (str.at(idx) == '>') break;
            }
            i = idx;
        }
        else s.push(str.at(i));
    }
    print();
    return 0;
}
