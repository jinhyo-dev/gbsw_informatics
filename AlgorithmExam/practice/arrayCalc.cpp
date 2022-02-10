#include <iostream>
using namespace std;
int main()
{
    int a[100000] = {};
    int max = -1000000, min = 1000000;
    double avg = 0, n, total = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
            max = a[i];

        if (a[i] < min)
            min = a[i];

        total += a[i];
    }
    avg = (total / n);
    cout << "총점: " << total << endl;
    cout << fixed;
    cout.precision(2);
    cout << "평균: " << avg << endl;
    cout << "최고점: " << max << endl;
    cout << "최저점: " << min << endl;
}