#include<stdio.h>
struct details{
	char college[10],school[10],address[10],email[10];
};
struct student{
	char name[10],city[10];
	int age,num;
	struct details n;
}s[10];

void main(){
	int i;
	for(i=0;i<2;i++){
		printf("enter details:");
		scanf("%s%d%d%s%s%s%s%s",&s[i].name,&s[i].age,&s[i].num,&s[i].city,&s[i].n.college,&s[i].n.school,&s[i].n.address,&s[i].n.email);
	}
	for(i=0;i<2;i++){
		printf(" details entered are:\n\n%s\n%d\n%d\n%s\n%s\n%s\n%s\n%s",&s[i].name,&s[i].age,&s[i].num,&s[i].city,&s[i].n.college,&s[i].n.school,&s[i].n.address,&s[i].n.email);
	}
}
