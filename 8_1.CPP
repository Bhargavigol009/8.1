#include<stdio.h>
#include<conio.h>

void main(){
int marks [5]= {9,8,7,8,3};
int i;
int lenth=0;
clrscr();

 for (i=0;i<=4;i++){

 printf("marks=%d\n",marks[i]);
 lenth++;
 }
  printf("%d",lenth);
getch();
}