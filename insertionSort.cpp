#include <iostream>
using namespace std;

int main()
{
    int n, num[10000], tmp = 0;
    cout << "입력할 수의 갯수 : ";
    cin >> n;
    cout << "수 입력 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    for (int i = 0; i < n; i++)
    {
        int j = i - 1;
        while (num[j] > num[j + 1] && (j >= 0))
        {
            tmp = num[j];
            num[j] = num[j + 1];
            num[j + 1] = tmp;
            j--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << num[i] << " ";
    }
}