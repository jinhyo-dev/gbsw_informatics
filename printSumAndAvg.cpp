#include <iostream>
using namespace std;
int main()
{
    long long a, b, c, sum = 0;
    double avg = 0;
    cin >> a >> b >> c;
    sum = a + b + c;
    avg = double(sum) / 3;
    cout << sum << endl;
    printf("%.1lf", avg);
    // cout << fixed;
    // cout.precision(1);
    // cout << avg;
}