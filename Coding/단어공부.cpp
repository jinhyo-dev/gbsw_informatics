#include<iostream>
#include<string.h>
using namespace std;
int main()
{
 char A[100000];
 int B[27];
 int max=0, dap;
 cin >> A;
 for (int i = 0; i < strlen(A); i++)
 {
   B[A[i]-97]++;
 }
 for (int i = 0; i < strlen(A); i++)
 {
   if (max<B[i])
   {
     max = B[i];
     dap = i;
   }
 }
 printf("%c",dap+97);
  
}