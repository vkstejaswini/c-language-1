#include<stdio.h>
struct student{
	
	char name[10],city[10];
	int age,num;
}s[10];
void main(){
	int i;
	
	for(i=0;i<=1;i++){
		printf("enter details:");
		scanf("%s%d%d%s",&s[i].name,&s[i].age,&s[i].num,&s[i].city);
	}
	for(i=0;i<=1;i++){
		
		printf("%s",s[0].name);
	}
	
}
