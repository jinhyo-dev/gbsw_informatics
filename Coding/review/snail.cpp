#include <iostream>
using namespace std;

int main()
{
    int A, B, V, day = 0, tmp = 0;
    cin >> A >> B >> V;
    while (1)
    {
        day++;
        tmp += A;
        if (tmp >= V)
            break;
        tmp -= B;
    }
    cout << day;
}