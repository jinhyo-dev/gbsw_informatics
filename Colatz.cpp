#include <iostream>
using namespace std;
 
int main() {
    unsigned int x;
    cout << "숫자를 입력하세요." << '\n'
         << "(단, 도중에 계산 결과가 4,294,967,295를 넘으면 부정확하다.)" << '\n';
    cin >> x;
    while (x != 1) {
        if (x % 2 == 0) {
            x = x / 2;
        } else {
            x = 3 * x + 1;
        }
        cout << x << '\n';
    }
    return 0;
}
