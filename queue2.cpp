#include <iostream>
#include <queue>
using namespace std;
queue<int> q;

int main()
{
    for (int i = 0; i < 5; i++)
        q.push(i);

    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}