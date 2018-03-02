#include<stdio.h>
#include<conio.h>
struct details{
 int cusid,accno,balance;
 char name,pswrd;
 	
}s[10];
main(){
	int i,opt,n,p=10;
	int d,pos;
	int k;
	int e;
	char op,np;
	int a,q;
	int b,z;
	int l,t;
	
	for(i=0;i<3;i++){
		printf("enter customer id:");
		scanf("%d",&s[i].cusid);
		printf("enter customer name:");
			scanf("%s",&s[i].name);
	printf("customer account number:");
		scanf("%d",&s[i].accno);
	printf("enter password:");
		scanf("%s",&s[i].pswrd);
	printf("enter balance:");
		scanf("%d",&s[i].balance);
    	}
		a:
		printf("enter the corresponding numbers for the details u need:\n1.Add customer\n2.delete customer\n3.modify customer details\n4.changing password\n5.money withdrawl\n6.money deposit\n7.enquiry of customer details\n8.list of customers having less than Rs.1000/- ");
		scanf("%d",&opt);

		switch(opt)
		{
			case 1:
				//new entries//
				
				printf("number of customers to be added:");
				scanf("%d",&n);
				for(i=0;i<n;i++){
						printf("enter customer id:");
		                scanf("%d",&s[i].cusid);
	                   	printf("enter customer name:");
		            	scanf("%s",&s[i].name);
						printf("customer account number:");
						scanf("%d",&s[i].accno);
						printf("enter password:");
						scanf("%s",&s[i].pswrd);
						printf("enter balance:");
						scanf("%d",&s[i].balance);
						printf("new entry of details is success.");
					 	printf("present entries are: %s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);
				}
				break;
				case 2:
					//deleting details//
					
					printf("number of customers to be deleted:");
					scanf("%d",&d);
					printf("enter the position you need to delete:");
					scanf("%d",&pos);
					for(i=0;i<d;i++){
						printf("enter the position you need to delete:");
					scanf("%d",&pos);
					for(i=pos-1;i<d;i++){
						
						s[i].cusid=s[i+1].cusid;
						s[i].accno=s[i+1].accno;
						s[i].balance=s[i+1].balance;
						s[i].name=s[i+1].name;
						s[i].pswrd=s[i+1].pswrd;
						printf("present entries are: %s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);	
					}
						
					}
					
					break;
					case 3:
						//modifying details//
						
						printf("enter the position where you want to modify:");
						scanf("%d",&k);
						for(i=k;i<=k;i++){
							s[i].accno='\0';
							s[i].balance='\0';
							s[i].cusid='\0';
							s[i].name='\0';
							s[i].pswrd='\0';
						printf("enter customer id:");
		                scanf("%d",&s[i].cusid);
	                   	printf("enter customer name:");
		            	scanf("%s",&s[i].name);
						printf("customer account number:");
						scanf("%d",&s[i].accno);
						printf("enter password:");
						scanf("%s",&s[i].pswrd);
						printf("enter balance:");
						scanf("%d",&s[i].balance);
						printf("modified entries are entries are: %s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);
													
						}
						break;
						case 4:
							//changing password//
						
							printf("enter the position where the password has to be changed:");
							scanf("%d",&e);
							printf("enter old password:");
							scanf("%s",&op);
							for(i=e;i<=e;i++){
								if(s[i].pswrd==op){
									printf("enter the new password:");
									scanf("%s",np);
									s[i].pswrd=np;
								}
								else{
									printf("passwords didnot match.please try agin later.");
								}
							}
							
							break;
							case 5:
								// money withdrawl //
								
								printf("enter the position of account of withdrawl:");
							 	scanf("%d",&a);
							 	printf("current balance is:%d",s[i].balance);
							 	printf("enter the amount to be withdrawn:");
							 	scanf("%d",&q);
							 	for(i=a;i<=a;i++){
							 		s[i].balance=s[i].balance-q;
								 }
								 printf("current balance is:%d",s[i].balance);
							 	
								break;
								case6:
									//6.money deposit//
									
								printf("enter the position of account of withdrawl:");
							 	scanf("%d",&b);
							 	printf("current balance is:%d",s[i].balance);
							 	printf("enter the amount to be withdrawn:");
							 	scanf("%d",&z);
							 	for(i=b;i<=b;i++){
							 		s[i].balance=s[i].balance+z;
								 }
								 printf("current balance is:%d",s[i].balance);
									
									
									break;
									case 7:
										// 7.enquiry of customer details  //
									
								printf("enter the position of account for which u need the details");
							 	scanf("%d",&l);
							 	for(i=l;i<=l;i++){
							 		printf("details of entered position are: %s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);
								 }										
										break;
										case 8:
											//   8.list of customers having less than Rs.1000/-  //
											for(i=0;i<10;i++){
													if(s[i].balance<=1000){
												
												printf("details of customer having balance less than Rs.1000/- are: %s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);
											}
											}								
										
											break;
											default:
												printf("Please enter correct option.");
		}
		for(i=0;i<p;i++){
			printf("%%s\t%d\t%d\t%d\t%s\n",s[i].name,s[i].cusid,s[i].accno,s[i].balance,s[i].pswrd);
		}
		printf("do u want to perform another operation? enter 1 for s and 2 for no");
		scanf("%d",&t);
		if(t==1){
			goto a;
		}
		
	getch();
	
	
}
