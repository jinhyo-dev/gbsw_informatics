#include <iostream>
using namespace std;
int h[100];

void view(int n)
{
  for (int i = 1; i <= n; i *= 2)
  {
    for (int j = i; j <= n && j < 2 * i - 1; j++)
    {
      cout << h[j];
    }
    cout << endl;
  }
}

void heap(int i)
{
  //i가 ㅂ 이하면 바로 return
  //부모와 비교해서 값을 바꿔야됨
  //반복문 또는 재귀함수

  //반복문
  while (i > 1)
  {
    int tmp;
    if (h[i] > h[i / 2])
    {
      tmp = h[i / 2];
      h[i / 2] = h[i];
      h[i] = tmp;
      i = i / 2;
      //swap
      //자식 값을 부모값으로 바꾸기
    }
    else
      return;
  }
  return;
}

int main()
{
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    cin >> h[i];
    heap(i);
  }

  view(n);
}