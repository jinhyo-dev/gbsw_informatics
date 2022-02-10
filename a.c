#include <stdio.h>
#include <string.h>
typedef struct{
   int id;
   int balance;
   char name[20];
   
} account;
account accArr[100];
int accNum=0;

int showmenu(){
   printf("\n");
   printf("1. 계좌개설\n2. 입금\n3. 출금\n4. 계좌출력\n5. 종료\n");
}
int make(){
   printf("계좌번호: ");
   scanf("%d", &accArr[accNum].id);
   printf("이름: ");
   scanf("%s", &accArr[accNum].name);
   printf("입금액 : ");
   scanf("%d", &accArr[accNum].balance);
   accNum++;
}
int deposit(){
   int acc, dep,i ;
   printf("\n");
   printf("입금할 계좌 : ");
   scanf("%d",&acc);
   printf("입금할 금액 : ");
   scanf("%d",&dep);

   for (i = 0; i < accNum; i++)  if(acc==accArr[i].id) accArr[i].balance += dep;
}
int withdraw(){
   int acc,wd,i ;
   printf("\n");
   printf("출금할 계좌 : ");
   scanf("%d",&acc);
   printf("출금할 금액 : ");
   scanf("%d",&wd);

   for (i = 0; i < accNum; i++)  {
      if(acc==accArr[i].id) {
       if (accArr[i].balance<wd)
       {
          printf("잔액이 부족합니다.\n");
       }else 
       {
          accArr[i].balance-=wd;
          printf("출금완료\n");
       }
      }
   }
}
int show(){
   for (int  i = 0; i < accNum; i++)
   {
      printf("-----------------------------------\n");
      printf("계좌번호 : %d\n",accArr[i].id);
      printf("이름 : %s\n",accArr[i].name);
      printf("잔액 : %d\n",accArr[i].balance);  
   }
   printf("총 %d개의 계좌가 있습니다.\n-----------------------------------",accNum);
   printf("\n");
}

int main(){
   int choice;
   while(1){
      showmenu();
      printf("선택: ");
      scanf("%d", &choice);
      switch(choice){
         case 1: make(); break;
         case 2: deposit(); break;
         case 3: withdraw(); break;
         case 4: show(); break;
         case 5: return 0;
         default: printf("잘못된 입력\n");  
      }
   }
   

}
