#include<stdio.h>
main()
{
 char  name[15],adress[50];
 int age;
 float height;
 printf("enter your name:");
 scanf("%s",&name);
 printf("enter your adress: ");
 scanf("%s",&adress);
 printf("enter your age:");
 scanf("%d",&age);
 printf("enter your height:");
 scanf("%f",&height);
 gets("name");
 puts("address");
 printf("name is: %s\n",name);
 printf("adress is: %s\n",adress);
 printf("age is: %d\n",age);
 printf("height is: %f",height);

}
