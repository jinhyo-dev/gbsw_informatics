#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int comp(string a, string b)
{
    if (a.length() == b.length())
        return a < b;
    else
        return a.length() < b.length();
}

int main()
{
    vector<string> v;
    int n, tmp;
    string name;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name;
        v.push_back(name);
    }

    sort(v.begin(), v.end(), comp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v.at(i) << endl;
    }
}