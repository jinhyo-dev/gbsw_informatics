#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <string>
using namespace std;

bool comp(pair<int, string> a, pair<int, string> b)
{
    if (a.first == b.first)
        return a.second > b.second;
    else
        a.first > b.first;
}

int main()
{
    vector<pair<int, string>> v;
    int n, tmp;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp >> name;
        v.push_back(make_pair(tmp, name));
    }
    sort(v.begin(), v.end(), comp);

    cout << "정렬완료!" << endl
         << endl;

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i).first << ' ' << v.at(i).second << endl;
    }
}