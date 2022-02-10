#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;
vector<pair<int, string>> v;
int main()
{
    int id, n;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> id;
        cin >> name;
        v.push_back(make_pair(id, name));
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
        cout << v[i].first << ' ' << v[i].second << endl;
}