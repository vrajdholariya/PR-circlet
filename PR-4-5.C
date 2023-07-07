//write a program to print the below pattern using nested for loop.


#include<stdio.h>
#include<conio.h>

void main(){
int v,r,a,j,s;
clrscr();
for(v=1;v<=5;v++){
for(r=1;r<=v;r++){
printf("%d",r);}
for(a=4;a>=v;a--){
printf(" ");}

for(j=4;j>=v;j--){
printf(" ");}

for(s=v;s>=1;s--){
printf("%d",s);}
printf("\n");}

getch();
}