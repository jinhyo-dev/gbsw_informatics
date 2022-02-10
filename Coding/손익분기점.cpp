#include<iostream>
using namespace std;
int main()
{
    int fixedCost, varCost, price, cnt=1;
    cin >> fixedCost >> varCost >> price;
    int firstPrice = price, firstVarcost = varCost;   
    while (1)
    {
        if ((fixedCost + varCost) >= price)
        {
            price += firstPrice;
            varCost += firstVarcost;
            cnt++;
            
        } else {
            break;
        }
        
    }
    cout << cnt << endl; 
    
}