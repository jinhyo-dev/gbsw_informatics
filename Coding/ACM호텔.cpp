#include <iostream>
using namespace std;

int main()
{
    int H, W, N, height, width, cnt = 0;
    cin >> H >> W >> N;

    while (1)
    {
        if (H <= N)
        {
            N -= H;
            height = N;
            cnt++;
        }
        else
            break;
    }
    if (cnt + 1 < 10)
        cout << height << '0' << cnt + 1;
    else
        cout << height << cnt + 1;
}