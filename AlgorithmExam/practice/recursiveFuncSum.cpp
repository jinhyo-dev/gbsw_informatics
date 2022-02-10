#include <iostream>
using namespace std;

int f(long long int k)
{
    int tmp = k % 10;
    if (k <= 1)
        return tmp;
    return tmp + f((long long int)(k / 10));
}

int main()
{
    long long int n;
    cin >> n;
    cout << f(n);
}