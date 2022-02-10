#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a[1000] = {};
    int n;
    cout << "입력할 수의 갯수 입력 : ";
    cin >> n;
    cout << "수 입력 : ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}