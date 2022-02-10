#include<iostream>
using namespace std;
 
int factorial(int num)
{
    int result = 1;
    for (int i = 1; i <= num; ++i)
        result = result * i;
    return result;
}
 
int main()
{
    int num = 0;
    int result = 0;
    cout << "수를 입력하세요 : ";
    cin >> num;
    result = factorial(num);
    cout << "factorial " << num << "! : " << result << endl;
}
