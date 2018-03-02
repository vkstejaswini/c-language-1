#include<stdio.h>
main()
{
 int n,i,sum=0,value,large;
 printf("enter the value of n:");
 scanf("%d",&n);
 for(i=0;i<=n;i++)
 {
 	printf("enter value:");
 scanf("%d",&value);
large= (n>value)?value:n;
 sum=sum+value;
 printf("sum=%d",sum);
 
    value++;
    i++;
 }
printf("largest value is:%d",large);
}
