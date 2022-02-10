#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int a[10] = {10, 5, 6, 7, 8, 9, 3, 4, 1, 2};

int compare(int a, int b)
{
    //return a > b; //a>b 일때 1을 리턴 내림차순 정렬
    return a < b; //오름차순
}

int main()
{
    vector<int> v;
    int n, t;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> t;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), less<int>()); //오름차순은 less 내림차순은 greater
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }

    // sort(a, a + 10, compare);
    // for (int i = 0; i < 10; i++)
    // {
    //     cout << a[i] << ' ';
    // }
}