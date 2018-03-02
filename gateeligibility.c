#include<stdio.h>
main()
{
char name;
int age;
printf("name is : ");
scanf("%s",&name);
printf("enter age:");
scanf("%d",&age);
if(age<=18)
{
	printf("not eligible for gate examination.");
	}	
	if(age>=20)
	{
		printf("eligible for gate exam.");
	}
	else{
		printf("there is still a year for you to get eligibility.");
	}
	
	
}
