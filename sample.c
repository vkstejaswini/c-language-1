#include<stdio.h>
main()
{
	printf("REGISTER UR DETAILS");
	char name,email,source,destination;
	int num,i,km,pswrd,cnfpswrd;
	printf("enter ur name:");
	scanf("%s",&name);
	printf("enter email-id:");
	scanf("%s",&email);
	printf("enter mobile number:");
	scanf("%d",&num);

	printf("enter password:");
	scanf("%d",&pswrd);
label a:
	{
	
	printf("confirm your password:");
	scanf("%d",&cnfpswrd);
}
	
		if(cnfpswrd!=pswrd)
		{
			
	}
	
	else{
		printf("passwords did not match");
		goto a;
	}
	
		printf("TARIFF DETAILS");
	printf("\n enter 1 for day time or 2 for night time:");
	switch(i)
	{
		case 1:
			printf("your booked slot is day time. i.e.,6:00am to 8:00pm with charge of rs29/km.");
			break;
		case 2:
			printf("your booked slot is night time. i.e.,8:00pm to 6:00am with charge of rs35/km.");
			break;
		default:
				printf("enter a valied slot");
	}
   printf("BOOKING DETAILS");
   printf("enter source point/pickup point:");
   printf("enter destination point:");
   scanf("%s",&source);
   scanf("%s",&destination);
   printf("estimated distance in km:");
   scanf("%d",&km);	
	switch(i)
	{
		case 1:
			
			printf("expected cost is: %d",km*29);
			break;
		case 2:
			printf("expected cost is:%d",km*35);
			break;
			
			
		}
		
		
	
	
		
	
}
