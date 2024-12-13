/*string is in comments or not*/
#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int i,t;
char a[25];
clrscr();
printf("\n enter the comment\n");
scanf("%s",&a);
t=strlen(a);
printf("\n the length of the string is t=%d",t);
if(a[0]=='/' && a[1]=='*'&& a[t-1]=='/'&&a[t-2]=='*')
{
printf("\n the given string is in comments\n");
}
else{
printf("\n the given string is not in comments");
}
getch();
}