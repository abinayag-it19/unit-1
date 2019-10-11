#include<stdio.h>
int main()
{
int n,fact=1;
printf("enter a value");
scanf("%d",&n);
for(int i=n;i>0;i--)
{
fact*=i;
}
printf("fact of %d is %d",n,fact);
return 0;
}
