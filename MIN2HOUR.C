#include<stdio.h>
main()
{
 int t,m,h;
 printf("enter the time in minutes:");
 scanf("%d",&t);
 h=t/60;
 m=t%60;
 printf("the time is %d hours %d minutes.",h,m);

}