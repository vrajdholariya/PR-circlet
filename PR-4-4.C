// write a program to print the below pattern using nested loop.

#include<stdio.h>
#include<conio.h>

void main(){
int a,b,c;
clrscr();
for(a=1;a<=5;a++){
for(c=1;c<=a;c++){
printf(" ");}
for(b=5;b>=a;b--){
printf("%d",b%2);}
printf("\n");}

getch();
}
