#include <iostream>
using namespace std;

int main()
{
    int A, B, V;
    int day = 0, tmp = 0;
    cin >> A >> B >> V;

    while (1)
    {
        tmp += A;
        day++;

        if (tmp >= V)
        {
            break;
        }
        tmp -= B;
    }
    cout << day;
}