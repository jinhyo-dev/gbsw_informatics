#include <iostream>
#include <vector>
using namespace std;
vector<int> v;

int main()
{
    int N, K;
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
        v.push_back(i);
    int pos = 0;
    cout << "<";

    while (!v.empty())
    {
        pos = (pos + K - 1) % v.size();
        cout << v[pos];
        v.erase(v.begin() + pos);
        if (v.size() == 0)
            cout << ">" << endl;
        else
            cout << ", ";
    }
}
