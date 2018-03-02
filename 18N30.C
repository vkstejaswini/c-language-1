#include<stdio.h>
main()
{
int n;
 a: //label

printf("enter the value of n: ");
 scanf("%d",&n);
 if((n>=18)&&(n<=30))
	     {
  printf("entered number is: %d",n);
	   }
 else       {
   goto a;

	     }
}