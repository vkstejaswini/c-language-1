#include<stdio.h>

main(){
char a1="teju",a2="sahi",a3="radha";
int p1=123,p2=234,p3=678;
char c;
int d;
printf("enter user name:");
scanf("%s",&c);
printf("enter password:");
scanf("%d",&d);
if((c==a1&&d==p1)||(c==a2||d==p2)||(c==a3&&d==p3)){
	
	printf("logged in successfully");
}
else{
	printf("username and passwords didnt match");
}

}
