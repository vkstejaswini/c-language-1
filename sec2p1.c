#include<stdio.h>
void main()
{
	int a,b,c,d,e,f,g,choice;

	printf("MENU:\n1.Add\n 2.Subtract\n 3.Multiply\n 4.Divide\n 5.Modulous");
	printf("\nenter your choice:");
	scanf("%d",&choice);
	printf("the two numbers are :");
	scanf("%d %d",&a,&b);
		c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	g=a%b;
	switch(choice)
	{
	
	case 1:
		
		printf("addition of two values is:%d",c);
	break;
	case 2:
	
		printf("subtraction of two values is:%d",d);
	break;
	case 3:
		
		printf("multiplication of two values is:%d",e);
	break;
	case 4:
	
		printf("division of two values is:%d",f);
	break;
	case 5:
	
		printf("modula of two values is:%d",g);
	break;
	default:
		printf("enter correct choice:");
}
	
}
