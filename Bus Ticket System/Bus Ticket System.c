// K17DMB54 (CSE101)
#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
main()
{
	int a,b,c,d,f,g,h,i,j,k,l,fare;
	int ch;
	char e;
	printf("************************************");
	printf("\nWELCOME! TO ONLINE BUS TICKET SYSTEM");
	printf("\n************************************");
	printf("\n===================================");
	printf("\nWE OFFER HIGLY PREMIUM LUXURY BUSES");
	printf("\n===================================");
	
	printf("\n\n\nseats of our premium Buses are shown below-");

	printf("\n---------------");
	printf("\n|01|   |02||03|");
	printf("\n|04|   |05||06|");
	printf("\n|07|   |08||09|");
	printf("\n|10|   |11||12|");
	printf("\n|13|   |14||15|");
	printf("\n|16|   |17||18|");
	printf("\n|19|   |20||21|");
	printf("\n---------------");	
	printf("\n\n\nchoose the bus from:");
	printf("\n");
	printf("\n1. Alwar");
	printf("\n2. Ambala");
	printf("\n3. Chandigarh");
	printf("\n4. Delhi");
	printf("\n5. Jalandhar");
	printf("\n6. Phagwara");
	printf("\nenter the route from where you want to take the Bus:");
	scanf("%d",&a);
		printf("\n\n\nchoose the bus to:");
	printf("\n");
	printf("\n1. Alwar");
	printf("\n2. Ambala");
	printf("\n3. Chandigarh");
	printf("\n4. Delhi");
	printf("\n5. Jalandhar");
	printf("\n6. Phagwara");
	printf("\nenter the route where you want to get reachead through the Bus:");
	scanf("%d",&b
	);
	printf("\n\n");
	
	if(a==b)
	{
		printf("Entry cannot be done because you are trying to be oversmart");
	}
	else
	{
	
	printf("you want Bus from %d to %d",a,b);

	printf("\n1. YES");
	printf("\n2. NO");
	printf("\n\nenter your selection 1.for YES or 2.for NO   :");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nselect the travel day");
		printf("\n1.  TODAY");
		printf("\n2.  TOMMOROW");
		printf("\nenter the no. for Travel day :");
		scanf("%d",&d);
		if(d==1)
		{
			printf("\nNumber of buses Available are 2");
			printf("\n1. Time-9 A.M");
			printf("\n2. Time-4 P.M");
			printf("\nselect the time according to your preference :");
			scanf("%d",&e);
			if(e==1)
			{
			
			printf("\nNo. of seat Available: 5");
			printf("\nenter the no. of seats to be booked:");
			scanf("%d",&g);
			printf("%d",g);
			system("cls");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			printf("\n++++++++++ONLINE BUS TICKET++++++++++++++++");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			if(g<=5)
			 {
			   	printf("\nyour entered no. of seat are %d",g);
			   	fare=1200*g;
			   	printf("\nYOUR TOTAL FARE IS : %d",fare);
			   	printf("\nENTER YOUR DETAILS\n");
			   	
			   	typedef struct
			   	{
			   	  char name[20];
					 char sex[2];
					 int age;
					 int mobile;
			   		
			   		
				}info;
				info passenger[5];
				int m;
				for(m=0;m<g;m++)
				{
					printf("NAME:");
					scanf("%s",passenger[m].name);
					printf("SEX:");
					scanf("%s",passenger[m].sex);
					printf("AGE:");
					scanf("%d",&passenger[m].age);
					printf("MOBILE NUMBER:");
					scanf("%d",&passenger[m].mobile);
				}
				
			   	
			   	printf("\nonce ticket booked seats can't be cancelled");
			   	printf(" \nyour fare cost for travel is :%d",fare);
			   	printf("\nPRESS  ENTER TO PPROCEED TO PAYMENT");
			   	printf("\n HAVE A GOOD GREAT HAPPY JOURNEY");
				
			 }
			 else
			 printf("enter the valid no. of seats only");
		    }
			if (e==2)
			{
			printf("\nNo. of seat Available: 4");
			printf("\nenter the no. of seats to be booked:");
			scanf("%d",&h);
			printf("%d",h);
			system("cls");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			printf("\n++++++++++ONLINE BUS TICKET++++++++++++++++");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			if(h<=4)
			 {
			   	printf("\nyour entered no. of seat are %d",h);
			   	
			   	fare=1200*h;
			   	printf("\nYOUR TOTAL FARE IS : %d",fare);
			   	printf("\nENTER YOUR DETAILS\n");
			   	
			   	typedef struct
			   	{
			   	  char name[20];
					 char sex[2];
					 int age;
					 int mobile;
			   		
			   		
				}info;
				info passenger[5];
				int m;
				for(m=0;m<h;m++)
				{
					printf("NAME:");
					scanf("%s",passenger[m].name);
					printf("SEX:");
					scanf("%s",passenger[m].sex);
					printf("AGE:");
					scanf("%d",&passenger[m].age);
					printf("MOBILE NUMBER:");
					scanf("%d",&passenger[m].mobile);
				}
			   	
			   	
			   	
			   	
			   	printf("\nonce ticket booked seats can't be cancelled");
			   	printf(" \nyour fare cost for travel is :%d",fare);
			   	printf("\nPRESS  ENTER TO PPROCEED TO PAYMENT");
			   	printf("\n HAVE A GOOD GREAT HAPPY JOURNEY");

			 }
			 else
			 printf("enter the valid no. of seats only");
			 	
		    }
		}
	    
		if(d==2)
			{
			printf("Number of bus Available are 3");
			printf("\n1. Time-9 A.M");
			printf("\n2. Time-4 P.M");
			printf("\n3. Time-6 P.M");
			printf("\nselect the time according to your preference :");
			scanf("%d",&i);
				
			if(i==1)
			{
			
			printf("\nNo. of seat Available: 5");
			printf("\nenter the no. of seats to be booked:");
			scanf("%d",&j);
			printf("%d",j);
			system("cls");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			printf("\n++++++++++ONLINE BUS TICKET++++++++++++++++");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			
			
			if(j<=5)
			 {
			   	printf("\nyour entered no. of seat are %d",j);
			   	fare=1200*j;
			   	printf("\nYOUR TOTAL FARE IS : %d",fare);
			   	printf("\nENTER YOUR DETAILS\n");
			   	
			   	typedef struct
			   	{
			   	  char name[20];
					 char sex[2];
					 int age;
					 int mobile;
			   		
			   		
				}info;
				info passenger[5];
				int m;
				for(m=0;m<j;m++)
				{
					printf("NAME:");
					scanf("%s",passenger[m].name);
					printf("SEX:");
					scanf("%s",passenger[m].sex);
					printf("AGE:");
					scanf("%d",&passenger[m].age);
					printf("MOBILE NUMBER:");
					scanf("%d",&passenger[m].mobile);
				}
			   	
			   	
			   	
			   	
			   	printf("\nonce ticket booked seats can't be cancelled");
			   	printf(" \nyour fare cost for travel is :%d",fare);
			   	printf("\nPRESS  ENTER TO PPROCEED TO PAYMENT");
			   	printf("\n HAVE A GOOD GREAT HAPPY JOURNEY");
				
			 }
			 else
			 printf("enter the valid no. of seats only");
		    }
			if (i==2)
			{
			printf("\nNo. of seat Available: 4");
			printf("\nenter the no. of seats to be booked:");
			scanf("%d",&k);
			printf("%d",k);
			system("cls");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			printf("\n++++++++++ONLINE BUS TICKET++++++++++++++++");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
					
			if(k<=4)
			 {
			   	printf("\nyour entered no. of seat are %d",k);
			   	fare=1200*k;
			   	printf("\nYOUR TOTAL FARE IS : %d",fare);
			   	printf("\nENTER YOUR DETAILS\n");
			   	
			   	typedef struct
			   	{
			   	  char name[20];
					 char sex[2];
					 int age;
					 int mobile;
			   		
			   		
				}info;
				info passenger[5];
				int m;
				for(m=0;m<k;m++)
				{
					printf("NAME:");
					scanf("%s",passenger[m].name);
					printf("SEX:");
					scanf("%s",passenger[m].sex);
					printf("AGE:");
					scanf("%d",&passenger[m].age);
					printf("MOBILE NUMBER:");
					scanf("%d",&passenger[m].mobile);
				}
			   	
			   	
			   	
			   	
			   	printf("\nonce ticket booked seats can't be cancelled");
			   	printf(" \nyour fare cost for travel is :%d",fare);
			   	printf("\nPRESS  ENTER TO PPROCEED TO PAYMENT");
			   	printf("\n HAVE A GOOD GREAT HAPPY JOURNEY");

			 }
			 else
			 printf("enter the valid no. of seats only");
			 	
		    }
		    if (i==3)
			{
			printf("\nNo. of seat Available: 8");
			printf("\nenter the no. of seats to be booked:");
			scanf("%d",&l);
			printf("%d",l);
			system("cls");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			printf("\n++++++++++ONLINE BUS TICKET++++++++++++++++");
			printf("\n+++++++++++++++++++++++++++++++++++++++++++");
			
			
			
			if(l<=8)
			 {
			   	printf("\nyour entered no. of seat are %d",l);
			   	fare=1200*l;
			   	printf("\nYOUR TOTAL FARE IS : %d",fare);
			   	printf("\nENTER YOUR DETAILS\n");
			   	
			   	typedef struct
			   	{
			   	  char name[20];
					 char sex[2];
					 int age;
					 int mobile;
			   		
			   		
				}info;
				info passenger[5];
				int m;
				for(m=0;m<l;m++)
				{
					printf("NAME:");
					scanf("%s",passenger[m].name);
					printf("SEX:");
					scanf("%s",passenger[m].sex);
					printf("AGE:");
					scanf("%d",&passenger[m].age);
					printf("MOBILE NUMBER:");
					scanf("%d",&passenger[m].mobile);
				}
			   	
			   	
			   	
			   	printf("\nonce ticket booked seats can't be cancelled");
			   	printf(" \nyour fare cost for travel is :%d",fare);
			   	printf("\nPRESS  ENTER TO PPROCEED TO PAYMENT");
			   	printf("\n HAVE A GOOD GREAT HAPPY JOURNEY");

			 }
			 else
			 printf("enter the valid no. of seats only");
		    
			}
				
    }
	}
	else
	printf("\nSORRY TRY AGAIN");	
	return 0;
}
}
