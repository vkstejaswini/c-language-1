#include<stdio.h>
main()
{
	
	printf("MENU:\n1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Modulous");
	int a,b,c,e,f,g,h,i,j;
    e=a+b;
    f=a-b;
    g=a*b;
    h=a/b;
    i=a%b;
    do{
	
    printf("enter values of a:");
    scanf("%d",&a);
    printf("enter b value:");
    scanf("%d",&b);
    printf("enter your choice");
    scanf("%d",&c);
    switch(c){
    	
    	case 1:
    		print("addition of the numbers is:%d",e);
    		break;
    	case 2:
    		printf("subtraction of two numbers is:%d",f);
    		break;
    	case 3:
    		printf("multiplication of two numbers is:%d",g);
    		break;
    	case 4:
    		printf("division of two numbers is:%d",h);
    		break;
    	case 5:
		    printf("modulous of two numbers is:%d",i);
    		break;
		default:
		 printf("enter correct choice:");
		 break;	
    	
	}
	printf("Do you want to continue?1.yes 2.no");
}while(j==1);
	
}
