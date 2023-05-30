#include<stdio.h>
#include<tmlib.h>
int main()
{
int x;
char a[21],b[21];
printf("Enter a string: ");
scanf("%s",a);
x=getStringLength(a);
printf("Length of %s is %d\n",a,x);
copyString(b,a);
printf("Copy of %s from (a) is now copied in (b) as %s\n",a,b);
return 0;
}