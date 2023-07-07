// write a program to print the below pattern using nested for loop.


#include<stdio.h>
#include<conio.h>

void main(){
int v,a,r;
clrscr();
for(v=5;v>=1;v--){
for(r=1;r<=v;r++){
printf(" ");}
for(a=v;a<=5;a++){
printf("%d",a);}
printf("\n");}


getch();
}