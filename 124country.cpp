#include <string> 
#include <iostream> 
using namespace std; 
string way(int n) 
{
   string a;
   char num[3] = {'4','1','2'}; 
   while(n>0)
   { 
     int mod = n%3; 
     a = num[mod] + a;  
     n = (n-1)/3; 
     } 
     return a; 
     }

    int main()
    {
      int n;
      cin >> n;
      cout << way(n) << endl;
    }
