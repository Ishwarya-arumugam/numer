#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int c=0,n,i,b;
char a[100];
clrscr();
gets(a);
n=strlen(a);
for(i=0;i<=n;i++)
{
b=((int)a[i])-48;
if(b>=0&&b<=9)
{
c++;
}
}
printf("\n%d",c);
getch();
}
