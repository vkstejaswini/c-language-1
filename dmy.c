#include<stdio.h>

main(){
	
	int date,month,year;
	printf("enter date:");
	scanf("%d",&date);
	printf("enter month:");
	scanf("%d",&month);
	printf("enter year:");
	scanf("%d",&year);
	if(year%4!=0&&year%100==0&&year%400==0){
		if(month==2){
			if(date<1||date>28){
				printf("%d is a leap year.Hence %d id invalid date.",year,date);
			}
		}
		
	}
	if(month==1||month==3||month==5||month==7||month==8||month==10||month==12){
		
		if(date<1||date>31){
			printf("%d month has only 31 days.hence date is invalid.",month);
		}
	}
	if(month==4||month==6||month==9||month==11){
		if(date<1||date>30){
			printf("%d month has only 30 days.hence invalid date",month);
		}
	}
	
	printf("tne entered date is %d/%d/%d",date,month,year);
}
