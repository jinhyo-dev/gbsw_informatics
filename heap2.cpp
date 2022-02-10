#include <stdio.h>
int h[100];

void view(int n)
{
  for (int i = 1; i <= n; i *= 2)
  {
    for (int j = i; j <= n && j <= 2 * i - 1; j++)
    {
      printf("%d ", h[j]);
    }
    printf("\n");
  }
}

void push(int i)
{ //최대 히프

  int tmp;
  if (i == 1)
    return; //루트노드가되면 끝
  else if (h[i] > h[i / 2])
  {                 //루트노드가 아니면 부모와 비교
    tmp = h[i / 2]; // 자식이 부모보다 크다면 스왑
    h[i / 2] = h[i];
    h[i] = tmp;
    push(i / 2); //자식을 부모로 만들어서 재귀함수 호출
  }
  else
    return;

  /*while(i>1){
     if(h[i] > h[i/2]){
      tmp = h[i/2];
      h[i/2] = h[i];
      h[i] = tmp;
      i = i/2;
     }
     else return;
  }
  return; */
}

int main()
{
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    scanf("%d", &h[i]);
    push(i);
  }
  view(n);
}