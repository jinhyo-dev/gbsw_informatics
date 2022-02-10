#include<stdio.h>
#include <string.h>
typedef struct{
  int num;
   int kr;
   int math;
   int en;
   char name[20];
} student;
student stdArr[100];
int stdNum = 0;

int showmenu ()
{
  printf("\n");
  printf("1. 학생등록\n2. 성적수정\n3. 성적출력\n4. 종료\n");
}
int submit()
{
  printf("학번 : ");
  scanf("%d",&stdArr[stdNum].num);
  printf("이름 : ");
  scanf("%s",stdArr[stdNum].name);
  printf("국어점수 : ");
  scanf("%d",&stdArr[stdNum].kr);
  printf("영어점수 : ");
  scanf("%d",&stdArr[stdNum].en);
  printf("수학점수 : ");
  scanf("%d",&stdArr[stdNum].math);
stdNum++;
}

int edit()
{
  int id;
  int score1;
  int score2;
  int score3;
  printf("수정할 학생의 학번을 입력하세요.\n");
  scanf("%d",&id);
  for (int i = 0; i < stdNum; i++)
  {
     if (id==stdArr[i].num)
  {
    printf("수정할 점수를 입력하세요.\n");
  printf("국어 : ");
    scanf("%d",&score1);
    stdArr[i].kr = score1;
  printf("영어 : ");
    scanf("%d",&score2);
    stdArr[i].en = score2;
  printf("수학 : ");
    scanf("%d",&score3);  
    stdArr[i].math = score3;
  }else printf("없는 학번입니다.\n");
  }
  
}
int show()
{
  for (int  i = 0; i < stdNum; i++)
   {
      printf("-----------------------------------\n");
      printf("학번 : %d\n",stdArr[i].num);
      printf("이름 : %s\n",stdArr[i].name);
      printf("국어점수 : %d\n",stdArr[i].kr); 
      printf("영어점수 : %d\n",stdArr[i].en); 
      printf("수학점수 : %d\n",stdArr[i].math); 
      printf("총점 : %d\n",stdArr[i].kr+stdArr[i].en+stdArr[i].math);
      printf("평균 : %.2f\n",(float)(stdArr[i].kr+stdArr[i].en+stdArr[i].math)/3);
   }
   printf("총 %d명의 학생이 있습니다.\n-----------------------------------",stdNum);
   printf("\n");
}

int main(){
   int choice;
   while(1){
      showmenu();
      printf("선택: ");
      scanf("%d", &choice);
      switch(choice){
         case 1: submit(); break;
         case 2: edit(); break;
         case 3: show(); break;
         case 4: return 0;
         default: printf("잘못된 입력\n");  
      }
   }
   

}
