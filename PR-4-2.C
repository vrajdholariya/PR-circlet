// write a program to print the below pattern using nested for loop.


#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c=10;
clrscr();
for (a=1;a<=5;a++){
for (b=1;b<=a;b++){
  printf("%d",c++);
  }
  printf("\n");
  }
getch();
}
