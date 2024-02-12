#include<stdio.h>
#include<conio.h>
void dosum(int n1,int n2)
{
int result;
result=n1+n2;
printf("%d\n",result);}
int main()
{
clrscr();
dosum(10,20);
dosum(30,40);
getch();
return 0;
}