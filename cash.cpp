#include<iostream>
using namespace std;
int main()
{
  int money, price,changes,coin;
  cin >> money;
  cin >> price;

  if (money >= price && money <= 10000)
  {
    changes = money - price;
    if (changes > 500)
    {
      for (int i = 0; ; i++)
      {
        changes - 500;
        coin ++;
      }
      
    } 
    else
    {
      if (changes > 100)
      {
        for (int i = 0; ; i++)
        {
          changes - 100;
          coin ++;
        }
        
      }
       
      else 
      {
         if (changes > 50)
      {
        for (int i = 0; ; i++)
        {
          changes - 50;
          coin ++;
        }
        
      } 
      else
      {
         if (changes > 10)
      {
        for (int i = 0; ; i++)
        {
          changes - 10;
          coin++;
        }
        
      } 
      else
      {
         if (changes > 5)
      {
        for (int i = 0; ; i++)
        {
          changes - 5;
          coin++;
        }
        
      }
      else
      {
         if (changes > 1)
      {
        for (int i = 0; ; i++)
        {
          changes - 1;
          coin ++;
        }
        
      }
      }
      }
      }
      }
      
    } 
    

  } else cout << "Error" << endl;
  
}