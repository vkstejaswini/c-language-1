#include<stdio.h>
main()
{
 int n,i,sum=0,value;
 printf("enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 scanf("%d",&value);
 (value>n)?value:n;
 sum=sum+value;
 printf("sum=%d",sum);
    value++;
    i++;
 }

}