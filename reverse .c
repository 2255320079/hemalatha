#include<stdio.h>

main()
{
int n,r,sum=0,temp;
printf("enter number");
scanf("%d",&n);
while(n>0)
{
r=n%10;
sum=sum*10+r;
n=n/10;
}

{
printf("reverse of the given number:%d",sum);
}
}