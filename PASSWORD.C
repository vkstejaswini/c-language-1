#include<stdio.h>
main()
{
char password[10],username[10],ch;
int i;
printf("enter username: ");
scanf("%s",&username);
printf("enter pasword any 10 characters: ");
  for(i=0;i<10;i++)
  {
   ch=getch();
   password[i]=ch;
   ch='*';
   printf("%c",ch);

  }
    password[i]='\0';
    printf("\nyour password is: ");
   for(i=0;i<10;i++)
   {
    printf("%c",password[i]);

   }
}