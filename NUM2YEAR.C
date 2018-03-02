#include<stdio.h>
main()
{
int num,year,weeks,days,rem;
printf("enter the number:");
scanf("%d",&num);
if(num>0)
{
 year=num/365;
 rem=num%365;
  if(rem>0)
  {
   weeks=rem/7;
   days=rem%7;

  }

}
printf("the number represents %d years %d weeks &  %d days",year,weeks,days);
}