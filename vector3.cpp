#include<stdio.h>
#include<stack>
std::stack<int> s;

int main()
{
  s.push(1);
  s.push(2);
  s.push(3);
  s.pop();
  s.pop();
  s.push(4);
  s.push(5);
  while (!s.empty())
  {
     printf("%d ",s.top());
     s.pop();
  }
}
  
   

