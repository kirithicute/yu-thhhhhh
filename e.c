#include<stdio.h>
int main()
{
char s[50],cge;
int i,cn=0;
clrscr();
printf("Enter any string:");
for(i=0;c!='\n';i++)
{
cn=getchar();
s[i]=cn;
}
s[i]='\0';
for(i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
{
cn++;
while(s[i]==' ')
i++;
}
}
printf("\n\nTotal words are %d",cn+1);
return 0;
}
