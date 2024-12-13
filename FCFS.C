#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
int i,j,k,n,m,flag=0;
char t[40],p[30];
clrscr();
printf("enter text:");
gets(t);
printf("\nEnetr pattern:");
gets(p);
n=strlen(t);
m=strlen(p);
for(i=0;i<=n-m;i++)
{
j=0;
while(j<m&&p[j]==t[j+i])
{
j++;
if(j==m)
{
flag=1;
k=i+1;
}
else
flag=0;
}
}
if(flag==1)
printf("\npattern found at position: %d",k);
else
printf("\npattern not found in text n");
getch();
}