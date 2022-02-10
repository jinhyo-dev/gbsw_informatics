#include <iostream>
using namespace std;
int main()
{
    int t, n, score;
    cin >> t >> n;
    for (int i = 0; i < t; i++)
    {
        cin >> score;
        if (score > n)
            cout << score << ' ';
    }
}