#include<stdio.h>
main()
{
 int h,m,t;
 printf("enter time in hours:");
 scanf("%d",&h);
 printf("enter time in minutes:");
 scanf("%d",&m);
 t=(h*60)+m;
 printf("the time is %d minutes.",t);
}