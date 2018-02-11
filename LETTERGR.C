#include<stdio.h>
main()
{
 int m;
 printf("enter the student marks: ");
 scanf("%d",&m);
 if(m<=60)
    printf("grade F");
 if((m>60)&&(m<=63))
     printf("grade D-");
 if((m>=64)&&(m<=67))
    printf("grade D");
 if((m>=68)&&(m<=70))
    printf("grade D+");
 if((m>=71)&&(m<=73))
    printf("grade C-");
 if((m>=74)&&(m<=77))
    printf("grade C");
 if((m>=78)&&(m<=80))
    printf("grade C+");
 if((m>=81)&&(m<=83))
    printf("grade B-");
 if((m>=84)&&(m<=87))
    printf("grade B");
 if((m>=88)&&(m<=90))
    printf("grade B+");
 if((m>=91)&&(m<=93))
    printf("grade A-");
 if((m>=93)&&(m<=97))
   printf("grade A");
 if((m>=98)&&(m<=100))
   printf("grade A+");


}