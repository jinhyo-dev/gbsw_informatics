#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool comp(int a, int b)
{
    return a < b;
}

int main()
{
    vector<int> v;
    int n, tmp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        v.push_back(tmp);
    }
    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << ' ';
    }
}