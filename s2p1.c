#include<stdio.h>
main()
{
int a,b,c;
int e,f,g,h,i;
printf("enter the choice:");
scanf("%d",&c);
printf("enter first value:");
scanf("%d",&a);
printf("enter second value:");
scanf("%d",&b);
e=a+b;
f=a-b;
g=a*b;
h=a/b;
i=a%b;	

switch(c)
{
	case 1:
     	printf("%d",e);
	break;
	case 2:
		printf("%d",f);
	break;
	case 3:
		printf("%d",g);
	break;
	case 4:
	    printf("%d",h);
	break;
	case 5:
	   printf("%d",i);
	break;
	default:
	printf("NO OPERATION");

		
	
}
		
	
}


