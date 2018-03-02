#include<stdio.h>
main(){
	int age,d;
	a:
	printf("enter age:");
	scanf("%d",&age);
	if(age>0&&age<=4){
		printf("not necessary now");
	}
	if(age>4&&age<=6){
		printf("kg");
	}
	if(age>6&&age<=9){
		printf("primary");
	}
	if(age>9&&age<=14){
		printf("high school");
	}
	if(age>14&&age<=16){
		printf("H S C");
	}
	if(age>16&&age<=28){
		printf("College ug");
	}
	if(age>28){
		printf("*****");
	}
	printf("enter 1 to check again or 2 to leave");  
	scanf("%d",&d);
	if(d==1){
		goto a;
	}
}
