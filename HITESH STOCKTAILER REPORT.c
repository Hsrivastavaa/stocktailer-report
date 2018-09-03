#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
main()


{    
        int i,l,j,k,key1,key2,key3,m,n;
        char p[]="hitesh top";
		char r[50],s[50],x[50],y[50];
        char q[]="HITESH LPU";
		printf("++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
	printf("++++++++++++++++++++++++++++++++++++++++\n");
	
	printf("\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      ++               HITESH                    ++");
	printf("\n\t\t\t                                      ++            GROCERY STORE                ++");
	printf("\n\t\t\t                                      ++       A PLACE FOR EVERY MAN AND         ++");
	printf("\n\t\t\t                                      ++               WOMEN                     ++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	printf("\n\t\t\t                                      +++++++++++++++++++++++++++++++++++++++++++++");
	
	
	printf("\n");
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*********************************************\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t WELCOME\t\t\t   **\t\t\t\t\t\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t           **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t   TO   \t\t   \t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\tMY PROJECT \t\t\t   **\n");;
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t      OF STOCKTAILER\t\t\t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");
	/*sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t\t    &\t\t\t\t   **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");*/
	/*sleep(1);
	printf("\t\t\t\t\t\t\t\t**\t       BIRTH STONES \t  \t       **\n");
	printf("\t\t\t\t\t\t\t\t**\t\t\t\t\t   \t   **\n");*/
	printf("\t\t\t\t\t\t\t\t*********************************************\n");
	
	getch();
	
	a:
	system("cls");
    
    printf("\n\n\n\n\t\tEnter your username  :-  ");
    gets(r);
    printf("\n\t\tEnter the password  :-  ");
    gets(s);
    l=strlen(s);
    for(i=0;i<l;i++)
	{
        if(s[i]==q[i])
    {
    	printf("\n\t\t\tPASSWORD ACCEPTED");
    	printf("\n\t\t\tPress enter to continue");
    	getch();
    	system("cls");
    	
    		printf("\n\n\t\tenter your name :- ");
    		gets(x);
    		printf("\n\t\tEnter your DOB(DD/MM/YYYY)  :- ");
    		gets(y);
    		b:
    		system("cls");
    		printf("\n\n\n\t\t  1  :-  TO KNOW ABOUT PRODUCTS SELL BY ME");
	printf("\n\t\t  2  :-  TO KNOW ABOUT MY STOCKS");
	printf("\n\t\t  3  :-  TO EXIT THE PROGRAM");
	printf("\n\t\t     enter your choice  :- ");
	scanf("%d",&key1);
	switch(key1)
	{
		case 1:
			system("cls");
			printf("\n\n\n\n\t\t\tDIFFERENT PRODUCTS AVAILABLE IN THE SHOP ARE :- ");
			printf("\n\n\t\t\t 1:- COLGATE TOOTHPASTE ");
			printf("\n\t\t\t 2:- LUX SOAP");
			printf("\n\t\t\t 3:- DETTOL SOAP");
			printf("\n\t\t\t 4:- PULSES");
			printf("\n\t\t\t 5:- SUGAR");
			printf("\n\t\t\t 6:- RICE");
			printf("\n\n\n\n\t\t\t\t  5:- TO GO TO MAIN MENU ");
			printf("\n\t\t\t\t  6:- TO EXIT PRESS HERE ");
			printf("\n\t\t\t\t   enter your choice :-"); 
			scanf("%d",&key2);
			switch(key2)
			{
				 
				 case 5:
					goto b;
					case 6:
							//case 4:
			system("cls");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			printf("\t\t\t\t\t\t\t\t\t  +THANK YOU+\n");
			printf("\t\t\t\t\t\t\t\t\t  +++++++++++\n");
			break;
			
			
			
				//default :
	//printf("\nWrong choice");
	//goto b; 	
			

						//break;
			}
			getch();
			case 2:
				system("cls");
	
		printf("\n\n\n\n\t\t\tColgate toothpaste is very good toothpaste. It kills germs in our mouth and protects our tooth from getting rotten");
        printf("\n\n\t\t\tIt's 1 kg packet cost is  :-195");
        printf("\n\n\t\t\tIt's 500 g packet cost is  :-100");
        printf("\n\n\t\t\tIt's 100 kg packet cost is  :-39");
			printf("\n\n\t\t\tAVAILABLE STOCKS ARE :- \n");
			printf("\n\t\t\t  1 :- 6 packets of 1 kg toothpaste ");
			printf("\n\t\t\t  2 :- 10 packets of 500 kg toothpaste ");
			printf("\n\t\t\t  3 :- 15 packets of 100 kg toothpaste ");
             printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t( 1 packets contains 100 units )");
             
			 getch();
			 system("cls");
			 printf("\n\n\n\n\t\t\tLux soap is not that much famous but usually used for bathing and hand washing.It protects us from different germs.");
			 printf("\n\n\t\t\tIt's 200 g of soap cost is  :-195");
        printf("\n\n\t\t\tIt's 100 g of soap cost is  :-100");
        printf("\n\n\t\t\tIt's 50 g of soap cost is  :-39");
			printf("\n\n\t\t\tAVAILABLE STOCKS ARE :- \n");
			printf("\n\t\t\t  1 :- 10 packets of 200 g soap ");
			printf("\n\t\t\t  2 :- 15 packets of 100 g soap ");
			printf("\n\t\t\t  3 :- 6 packets of 50 g soap ");
             printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t( 1 packets contains 100 units )");
             
             getch();
			 system("cls");
			 printf("\n\n\n\n\t\t\tDettol soap is very much famous used for bathing and it's liquid form is used for hand washing.It protects us from different germs.");
			 printf("\n\n\t\t\tIt's 200 g of soap cost is  :-100");
        printf("\n\n\t\t\tIt's 100 g of soap cost is  :-50");
        printf("\n\n\t\t\tIt's 50 g of soap cost is  :-27");
			printf("\n\n\t\t\tAVAILABLE STOCKS ARE :- \n");
			printf("\n\t\t\t  1 :- 18 packets of 200 g soap ");
			printf("\n\t\t\t  2 :- 16 packets of 100 g soap ");
			printf("\n\t\t\t  3 :- 9packets of 50 g soap ");
             printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t( 1 packets contains 100 units )");
             
             getch();
			 system("cls");
			 printf("\n\n\n\n\t\t\tPulses are a dish used to eat with chapaties and rice.They afre of many types.");
			 printf("\n\n\t\t\tIt's 1 kg of Arhar dal cost is  :-85");
        printf("\n\n\t\t\tIt's 1 kg of chana dal cost is  :-120");
        printf("\n\n\t\t\tIt's 1 kg of Urad dal cost is  :-56");
			printf("\n\n\t\t\tAVAILABLE STOCKS ARE :- \n");
			printf("\n\t\t\t  1 :- 100 kg of arahar dal");
			printf("\n\t\t\t  2 :- 89 kg of chana dal ");
			printf("\n\t\t\t  3 :- 60 kg of urad dal ");
             printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t( 1 kg =1000 g )");
             
             getch();
			 system("cls");
			 printf("\n\n\n\n\t\t\tSugar are that important sweet which is used in our daily life like in tea,in coffee,in sweets,in desrets");
			 printf("\n\n\t\t\tIt's 1 kg of best quality of sugar cost is  :-85");
        printf("\n\n\t\t\tIt's 1 kg of medium quality of sugar cost is  :-65");
        printf("\n\n\t\t\tIt's 1 kg of low quality of sugar cost is  :-45");
			printf("\n\n\t\t\tAVAILABLE STOCKS ARE :- \n");
			printf("\n\t\t\t  1 :- 100 kg of best quality");
			printf("\n\t\t\t  2 :- 89 kg of medium quality ");
			printf("\n\t\t\t  3 :- 60 kg of low quality ");
             printf("\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t( 1 kg =1000 g )");
         
         getch();
         goto b;
         case 3:
         	//exit(1);
         	break;
			
	}
    		
	}
	else 
	{
		printf("\n\t\t\tPASSWORD DENIED OR WRONG USERNAME");
		getch();
	 
	}
    	
	}
    
}
