#include <stdio.h>

int main()
{
  int a;
  scanf("%d",&a);
    for (int i = 0; i < a; i++)    // 5번 반복. 세로 방향
    {
        for (int j = 0; j < a; j++)   // 5번 반복. 가로 방향
        {
            if (j <= i)               // 세로 방향 변수만큼
                printf("*");          // 별 출력
        }
        printf("\n");              // 가로 방향으로 별을 다 그린 뒤 다음 줄로 넘어감
    }

}