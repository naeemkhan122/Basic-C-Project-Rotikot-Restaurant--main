#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<time.h>
#include<string.h>


/* deceleration of functions start */

void admin(); // deceleration of admin function 
void casualdining(); // deceleration of main casual dining function 
void fivestardining(); // deceleration of main 5 star dining function
void casualmenu(); // deceleration of casual menu function
void fivestarmenu(); // deceleration of 5 star menu function
void clrscr(); // deceleration of clear screen function
void bill(); // deceleration of bill function
void datetime(); // deceleration of date and time function
void mexican_dishes(); // deceleration of Mexican dishes
void mexicandining(); // deceleration of main Mexican dining function
void chinese_dishes(); // deceleration of Chinese dishes
void italian_dishes(); // deceleration of Italian dishes
void chinesemain(); // deceleration of main Chinese dining function
void italianmain(); // deceleration of main Italian dining function 
void salads(); // deceleration of salad function
void sauces(); // deceleration of sauces function
void bbq(); // deceleration of bbq function
void saladmain(); // deceleration of main salad function
void saucemain(); // deceleration of main sauces function
void bbqmain(); // deceleration of main bbq function
void paksitanimain(); // deceleration of main Pakistani dining function
void pakistani(); // deceleration of Pakistani dining function
void breakfastmain(); // deceleration of main breakfast function
void breakfast(); // deceleration of breakfast dining function 
void continentalmain(); // deceleration of main continental dining function 
void continental(); // deceleration of continental dining function

/* deceleration of functions end */

	/* deceleration of global variables  start */

double totalPrice;
int menuchoice , menucount;

/* variables used for bill printing start */
int f1 = 0,
	f2 = 0,
	f3 = 0,
	f4 = 0,
	f5 = 0,
	f6 = 0,
	f7 = 0,
	f8 = 0,
	f9 = 0,
	f10 = 0,
	f11 = 0,
	f12 = 0,
	f13 = 0,
	f14 = 0,
	f15 = 0,
	f16 = 0,
	f17 = 0,
	f18 = 0,
	f19 = 0,
	f20 = 0,
	f21 = 0,
	f22 = 0,
	f23 = 0,
	f24 = 0,
	f25 = 0,
	f26 = 0,
	f27 = 0,
	f28 = 0,
	f29 = 0,
	f30 = 0,
	f31 = 0,
	f32 = 0,
	f33 = 0;
	
int fc1 = 0,
	fc2 = 0,
	fc3 = 0,
	fc4 = 0,
	fc5 = 0,
	fc6 = 0,
	fc7 = 0,
	fc8 = 0,
	fc9 = 0,
	fc10 = 0,
	fc11 = 0,
	fc12 = 0,
	fc13 = 0,
	fc14 = 0,
	fc15 = 0,
	fc16 = 0,
	fc17 = 0,
	fc18 = 0,
	fc19 = 0,
	fc20 = 0,
	fc21 = 0,
	fc22 = 0,
	fc23 = 0,
	fc24 = 0,
	fc25 = 0,
	fc26 = 0,
	fc27 = 0,
	fc28 = 0,
	fc29 = 0,
	fc30 = 0,
	fc31 = 0,
	fc32 = 0,
	fc33 = 0;	

int m1 = 0,
	m2 = 0,
	m3 = 0,
	m4 = 0,
	m5 = 0,
	m6 = 0,
	m7 = 0,
	m8 = 0,
	m9 = 0,
	m10 = 0,
	m11 = 0,
	m12 = 0,
	m13 = 0,
	m14 = 0,
	m15 = 0,
	m16 = 0,
	m17 = 0,
	m18 = 0,
	m19 = 0,
	m20 = 0,
	m21 = 0,
	m22 = 0;
	
int mc1 = 0,
	mc2 = 0,
	mc3 = 0,
	mc4 = 0,
	mc5 = 0,
	mc6 = 0,
	mc7 = 0,
	mc8 = 0,
	mc9 = 0,
	mc10 = 0,
	mc11 = 0,
	mc12 = 0,
	mc13 = 0,
	mc14 = 0,
	mc15 = 0,
	mc16 = 0,
	mc17 = 0,
	mc18 = 0,
	mc19 = 0,
	mc20 = 0,
	mc21 = 0,
	mc22 = 0;
	
	int i1 = 0,
	i2 = 0,
	i3 = 0,
	i4 = 0,
	i5 = 0,
	i6 = 0,
	i7 = 0,
	i8 = 0,
	i9 = 0,
	i10 = 0,
	i11 = 0,
	i12 = 0,
	i13 = 0,
	i14 = 0,
	i15 = 0,
	i16 = 0,
	i17 = 0,
	i18 = 0,
	i19 = 0,
	i20 = 0,
	i21 = 0,
	i22 = 0;
	
int ic1 = 0,
	ic2 = 0,
	ic3 = 0,
	ic4 = 0,
	ic5 = 0,
	ic6 = 0,
	ic7 = 0,
	ic8 = 0,
	ic9 = 0,
	ic10 = 0,
	ic11 = 0,
	ic12 = 0,
	ic13 = 0,
	ic14 = 0,
	ic15 = 0,
	ic16 = 0,
	ic17 = 0,
	ic18 = 0,
	ic19 = 0,
	ic20 = 0,
	ic21 = 0;
	
int a1 = 0,
	a2 = 0,
	a3 = 0,
	a4 = 0,
	a5 = 0,
	a6 = 0,
	a7 = 0,
	a8 = 0,
	a9 = 0,
	a10 = 0,
	a11 = 0,
	a12 = 0,
	a13 = 0,
	a14 = 0,
	a15 = 0,
	a16 = 0,
	a17 = 0,
	a18 = 0,
	a19 = 0;
	
int ac1 = 0,
	ac2 = 0,
	ac3 = 0,
	ac4 = 0,
	ac5 = 0,
	ac6 = 0,
	ac7 = 0,
	ac8 = 0,
	ac9 = 0,
	ac10 = 0,
	ac11 = 0,
	ac12 = 0,
	ac13 = 0,
	ac14 = 0,
	ac15 = 0,
	ac16 = 0,
	ac17 = 0,
	ac18 = 0,
	ac19 = 0;
	
int b1 = 0,
	b2 = 0,
	b3 = 0,
	b4 = 0,
	b5 = 0,
	b6 = 0,
	b7 = 0,
	b8 = 0,
	b9 = 0,
	b10 = 0,
	b11 = 0,
	b12 = 0,
	b13 = 0,
	b14 = 0;

int bc1 = 0,
	bc2 = 0,
	bc3 = 0,
	bc4 = 0,
	bc5 = 0,
	bc6 = 0,
	bc7 = 0,
	bc8 = 0,
	bc9 = 0,
	bc10 = 0,
	bc11 = 0,
	bc12 = 0,
	bc13 = 0,
	bc14 = 0;	
	
	char customername[20] = "Anonymous";
	
/* variables used for bill printing end */

	/* deceleration of global variables  end */

/* main start */
void main()
{
	int mainchoice,eattype;
	clrscr();
	printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
	printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
	printf("\n \t\t\t\t\t\t\t\t ********************* Choose ********************** \n");
	printf("\n \t\t\t\t\t\t\t\t <0> Admin \n \t\t\t\t\t\t\t\t <1> Customer \n");
	printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
	scanf("%d", &mainchoice);
		
		if (mainchoice == 1)
		{
			menuchoice = 0;
			menucount  = 0;
			int choice1,submenu = 0;
			clrscr();
			printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
			printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
			printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB  WELCOME FROM OUR RESTAURANT  \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
			sleep(2);
			printf("\n \t\t\t\t\t\t\t\t What is Your Name Sir? \n \t\t\t\t\t\t\t\t Name: ");
			scanf("%s", &customername);
			clrscr();
			
			printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
			printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
			printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 CUSTOMER PORTAL ------------------------------\n");
			printf("\n \t\t\t\t\t\t\t\t ********************** Choose ********************** \n");
			printf("\n \t\t\t\t\t\t\t\t <1> BreakFast \n \t\t\t\t\t\t\t\t <2> Lunch \n \t\t\t\t\t\t\t\t <3> High-Tea \n \t\t\t\t\t\t\t\t <4> Dinner \n");
			printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
			scanf("%d", &eattype);
			
			/* 1 BreakFast Condition start */
			if (eattype == 1)
			{
				breakfastmain();
			}
			/* 1 BreakFast condition end */
			
			/* 2 Lunch condition start */
			else if (eattype == 2)
			{
				do
				{
				clrscr();
				
				printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 CUSTOMER PORTAL ------------------------------\n");
				
				if(submenu == 0)
				{
					printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 You're here for lunch, Amazing! \n");
					printf("\n \t\t\t\t\t\t\t\t ********************** Choose ********************** \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Salads \n \t\t\t\t\t\t\t\t <2> Sauces \n \t\t\t\t\t\t\t\t <3> B.B.Q \n \t\t\t\t\t\t\t\t <4> Pakistani Dishes \n \t\t\t\t\t\t\t\t <5> Chinese Dishes \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				else
				{
					printf("\n \t\t\t\t\t\t\t\t Do you want to choose other items? \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Salads \n \t\t\t\t\t\t\t\t <2> Sauces \n \t\t\t\t\t\t\t\t <3> B.B.Q \n \t\t\t\t\t\t\t\t <4> Pakistani Dishes \n \t\t\t\t\t\t\t\t <5> Chinese Dishes \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				printf("\n \t\t\t\t\t\t\t\t Enter Your Choice");
				scanf("%d",&submenu);	
					
					if(submenu == 1)
					{
						saladmain();
					}
					
					else if(submenu == 2)
					{
						saucemain();
					}
					
					else if(submenu == 3)
					{
						bbqmain();
					}
					
					else if(submenu == 4)
					{
						paksitanimain();
					}
					
					else if(submenu == 5)
					{
						chinesemain();
					}
				}
				
				while(submenu != 10);
				clrscr();
				bill();
			}
			/* 2 Lunch condition end */
			
			/* 3 Hightea condition start */
			else if (eattype == 3)
			{
				do
				{
				clrscr();
				
				printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 CUSTOMER PORTAL ------------------------------\n");
				
				if(submenu == 0)
				{
					printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 You're here for High-tea, Amazing! \n");
					printf("\n \t\t\t\t\t\t\t\t ********************** Choose ********************** \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Continental \n \t\t\t\t\t\t\t\t <2> B.B.Q \n \t\t\t\t\t\t\t\t <3> Pakistani Dishes \n \t\t\t\t\t\t\t\t <4> Chinese Dishes \n \t\t\t\t\t\t\t\t <5> Salad \n \t\t\t\t\t\t\t\t <6> Sauce \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				else
				{
					printf("\n \t\t\t\t\t\t\t\t Do you want to choose other items? \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Continental \n \t\t\t\t\t\t\t\t <2> B.B.Q \n \t\t\t\t\t\t\t\t <3> Pakistani Dishes \n \t\t\t\t\t\t\t\t <4> Chinese Dishes \n \t\t\t\t\t\t\t\t <5> Salad \n \t\t\t\t\t\t\t\t <6> Sauce \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				printf("\n \t\t\t\t\t\t\t\t Enter Your Choice");
				scanf("%d",&submenu);	
					
					if(submenu == 1)
					{
						continentalmain();
					}
					
					else if(submenu == 2)
					{
						bbqmain();
					}
					
					else if(submenu == 3)
					{
						paksitanimain();
					}
					
					else if( submenu == 4)
					{
						chinesemain();
					}
					
					else if(submenu == 5)
					{
						saladmain();
					}
					
					else if(submenu == 6)
					{
						saucemain();
					}
				}
				
				while(submenu != 10);
				clrscr();
				bill();
				
			}
			/* 3 hightea condition end */
			
			/* 4 dinner condition start */
			else if (eattype == 4)
			{	
				do
				{
				clrscr();
				
				printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 CUSTOMER PORTAL ------------------------------\n");
				
				
				if(submenu == 0)
				{
					printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 You're here for dinner, Amazing! \n");
					printf("\n \t\t\t\t\t\t\t\t ********************** Choose ********************** \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Casual Menu \n \t\t\t\t\t\t\t\t <2> FiveStar \n \t\t\t\t\t\t\t\t <3> Mexican Dishes \n \t\t\t\t\t\t\t\t <4> Chinese Dishes \n \t\t\t\t\t\t\t\t <5> Italian Dishes \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				else
				{
					printf("\n \t\t\t\t\t\t\t\t Do you want to choose other items? \n");
					printf("\n \t\t\t\t\t\t\t\t <1> Casual Menu \n \t\t\t\t\t\t\t\t <2> FiveStar \n \t\t\t\t\t\t\t\t <3> Mexican Dishes \n \t\t\t\t\t\t\t\t <4> Chinese Dishes \n \t\t\t\t\t\t\t\t <5> Italian Dishes \n");
					printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
					printf("\n \t\t\t\t\t\t\t\t Enter 10 to Exit \n ");
				}
				
				printf("\n \t\t\t\t\t\t\t\t Enter Your Choice");
				scanf("%d",&submenu);	
					
					if(submenu == 1)
					{
						casualdining();
					}
					
					else if(submenu == 2)
					{
						fivestardining();
					}
					
					else if(submenu == 3)
					{
						mexicandining();
					}
					
					else if(submenu == 4)
					{
						chinesemain();
					}
					
					else if(submenu == 5)
					{
						italianmain();
					}
				}
				
				while(submenu != 10);
				clrscr();
				bill();
				
			}
			/* 4 dinner condition end */
		}
		
		else if(mainchoice==0)
		{
			admin();
		}
		
		else
		{
			printf("Invalid Input");
		}	
}
/* main end */

						/* ------------------- All main function start ------------------- */

/* Casual dining function start */
void casualdining()
{
	
   // variables for casual menu pricing 
	int beef_roll 				= 50,
		chicken_roll 			= 60,
		chicken_malai_roll 		= 80,
		chicken_che_roll 		= 100,
		chicken_mayo_roll		= 120,
		chicken_tikka 			= 140,
		beef_burger 			= 120, 
		chicken_burger 			= 130, 
		zinger_burger 			= 190,
		special_burger 			= 210,
		veg_chow 				= 90, 
		chi_chow 				= 150, 
		manchu 					= 160, 
		broast 					= 190,
		pizza 					= 280;
	
	do
	{
		clrscr(); 
		casualmenu(); // calling casual menu function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        scanf("%i", &menuchoice);
		
        if (menuchoice == 0)
		{
            totalPrice += beef_roll;
			menucount  += 1;
			f1 = 1;
			fc1 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += chicken_roll;
			menucount  += 1;
			f2 = 1;
			fc2 += 1;
        }
		
		else if (menuchoice == 2)
		{
            totalPrice += chicken_malai_roll;
			menucount  += 1;
			f3 = 1;
			fc3 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += chicken_che_roll;
			menucount  += 1;
			f4 = 1;
			fc4 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += chicken_mayo_roll;
			menucount  += 1;
			f5 = 1;
			fc5 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += chicken_tikka;
			menucount  += 1;
			f6 = 1;
			fc6 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += beef_burger;
			menucount  += 1;
			f7 = 1;
			fc7 += 1;
		}
		
		else if (menuchoice == 7)
		{
			totalPrice += chicken_burger;
			menucount  += 1;
			f8 = 1;
			fc8 += 1;
		}
		
		else if (menuchoice == 8)
		{
			totalPrice += zinger_burger;
			menucount  += 1;
			f9 = 1;
			fc9 += 1;
		}
		
		else if (menuchoice == 9)
		{
			totalPrice += special_burger;
			menucount  += 1;
			f10 = 1;
			fc10 += 1;
		}
		
		else if (menuchoice == 10)
		{
			totalPrice += veg_chow;
			menucount  += 1;
			f11 = 1;
			fc11 += 1;
		}
		
		else if (menuchoice == 11)
		{
			totalPrice += chi_chow;
			menucount  += 1;
			f12 = 1;
			fc12 += 1;
		}
		
		else if (menuchoice == 12)
		{
			totalPrice += manchu;
			menucount  += 1;
			f13 = 1;
			fc13 += 1;
		}
		
		else if (menuchoice == 13)
		{
			totalPrice += broast;
			menucount  += 1;
			f14 = 1;
			fc14 += 1;
		}
		
		else if (menuchoice == 14)
		{
			totalPrice += pizza;
			menucount  += 1;
			f15 = 1;
			fc15 += 1;
		}

        printf(" \t\t\t\t\t\t\t\t Total so far: %lf\n\n", totalPrice);
    }
	
	while (menuchoice != 20);
	clrscr();
    
}
/* Casual dining function end */

/* 5 star dining function start */
void fivestardining()
{
	// variables for 5star menu pricing
	int chicken_ping 			= 90,
		chick_nugg 				= 120,
		fire_it_up  			= 100,
		zeed_zadd 				= 60,
		double_burger			= 100,
		five_star_burger 		= 240,
		double_che_burger 		= 260, 
		five_star_wrap 			= 660, 
		hot_shots 				= 120,
		chicken_tikka_pizza 	= 999,
		chicken_fajita_pizza 	= 1025, 
		seekh_kabab 			= 210, 
		prawns 					= 450, 
		fried_fish 				= 90,
		prawns_biryani 			= 150,
		prawns_soup				= 160,
		chicken_white_karahi	= 880,
		balochi_tikka			= 280;
		
	do
	{
		clrscr();
		fivestarmenu(); // calling five star menu function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += chicken_ping;
			menucount  += 1;
			f16 = 1;
			fc16 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += chick_nugg;
			menucount  += 1;
			f17 = 1;
			fc17 += 1;
        }
		
		else if (menuchoice == 2)
		{
            totalPrice += fire_it_up;
			menucount  += 1;
			f18 = 1;
			fc18 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += zeed_zadd;
			menucount  += 1;
			f19 = 1;
			fc19 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += double_burger;
			menucount  += 1;
			f20 = 1;
			fc20 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += five_star_burger;
			menucount  += 1;
			f21 = 1;
			fc21 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += double_che_burger;
			menucount  += 1;
			f22 = 1;
			fc22 += 1;
		}
		
		else if (menuchoice == 7)
		{
			totalPrice += five_star_wrap;
			menucount  += 1;
			f23 = 1;
			fc23 += 1;
		}
		
		else if (menuchoice == 8)
		{
			totalPrice += hot_shots;
			menucount  += 1;
			f24 = 1;
			fc24 += 1;
		}
		
		else if (menuchoice == 9)
		{
			totalPrice += chicken_tikka_pizza;
			menucount  += 1;
			f25 = 1;
			fc25 += 1;
		}
		
		else if (menuchoice == 10)
		{
			totalPrice += chicken_fajita_pizza;
			menucount  += 1;
			f26 = 1;
			fc26 += 1;
		}
		
		else if (menuchoice == 11)
		{
			totalPrice += seekh_kabab;
			menucount  += 1;
			f27 = 1;
			fc27 += 1;
		}
		
		else if (menuchoice == 12)
		{
			totalPrice += prawns;
			menucount  += 1;
			f28 = 1;
			fc28 += 1;
		}
		
		else if (menuchoice == 13)
		{
			totalPrice += fried_fish;
			menucount  += 1;
			f29 = 1;
			fc29 += 1;
		}
		
		else if (menuchoice == 14)
		{
			totalPrice += prawns_biryani;
			menucount  += 1;
			f30 = 1;
			fc30 += 1;
		}
		
		else if (menuchoice == 15)
		{
			totalPrice += prawns_soup;
			menucount  += 1;
			f31 = 1;
			fc31 += 1;
		}
		
		else if (menuchoice == 16)
		{
			totalPrice += chicken_white_karahi;
			menucount  += 1;
			f32 = 1;
			fc32 += 1;
		}
		
		else if (menuchoice == 17)
		{
			totalPrice += balochi_tikka;
			menucount  += 1;
			f33 = 1;
			fc33 += 1;
		}      
    }
	
	while (menuchoice != 20);
	clrscr();
    
}
/* 5 star dining function end */

/* Mexican menu main function start */

void mexicandining()
{
	// variables for 5star menu pricing
	int taco 			= 200,
		maize 			= 150,
		salsa 			= 300,
		enchilada  		= 160,
		avocado 		= 290,
		guacamole		= 310,
		tamale 			= 160,
		burrito 		= 270, 
		quesadilla 		= 320, 
		tostado 		= 450,
		refried_bean 	= 280;
		
	do
	{
		clrscr();
		mexican_dishes(); // calling mexican dishes menu function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += taco;
			menucount  += 1;
			m1 = 1;
			mc1 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += maize;
			menucount  += 1;
			m2 = 1;
			mc2 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += salsa;
			menucount  += 1;
			m3 = 1;
			mc3 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += enchilada;
			menucount  += 1;
			m4 = 1;
			mc4 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += avocado;
			menucount  += 1;
			m5 = 1;
			mc5 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += guacamole;
			menucount  += 1;
			m6 = 1;
			mc6 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += tamale;
			menucount  += 1;
			m7 = 1;
			mc7 += 1;
		}
		
		else if (menuchoice == 7)
		{
			totalPrice += burrito;
			menucount  += 1;
			m8 = 1;
			mc8 += 1;
		}
		
		else if (menuchoice == 8)
		{
			totalPrice += quesadilla;
			menucount  += 1;
			m9 = 1;
			mc9 += 1;
		}
		
		else if (menuchoice == 9)
		{
			totalPrice += tostado;
			menucount  += 1;
			m10 = 1;
			mc10 += 1;
		}
		
		else if (menuchoice == 10)
		{
			totalPrice += refried_bean;
			menucount  += 1;
			m11 = 1;
			mc11 += 1;
		}
    }
	
	while (menuchoice != 20);
	clrscr();
    
	
}
/* Mexican menu main function end */

/* Chinese menu main function start */
void chinesemain()
{
	// variables for chinese menu pricing
	int sweet_sour 			= 100,
		kung_pao 			= 120,
		ma_po_tofu 			= 135,
		wontons  			= 170,
		dumplings 			= 210,
		chowmein			= 666,
		peking_roasted 		= 720,
		spring_rolls 		= 800, 
		noodles 			= 850, 
		fried_rice 			= 999,
		chicken_jalfrezi 	= 700;
		
	do
	{
		clrscr();
		chinese_dishes(); // calling chinese dishes menu function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += sweet_sour;
			menucount  += 1;
			m12 = 1;
			mc12 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += kung_pao;
			menucount  += 1;
			m13 = 1;
			mc13 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += ma_po_tofu;
			menucount  += 1;
			m14 = 1;
			mc14 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += wontons;
			menucount  += 1;
			m15 = 1;
			mc15 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += dumplings;
			menucount  += 1;
			m16 = 1;
			mc16 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += chowmein;
			menucount  += 1;
			m17 = 1;
			mc17 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice +=  peking_roasted;
			menucount  += 1;
			m18 = 1;
			mc18 += 1;
		}
		
		else if (menuchoice == 7)
		{
			totalPrice += spring_rolls;
			menucount  += 1;
			m19 = 1;
			mc19 += 1;
		}
		
		else if (menuchoice == 8)
		{
			totalPrice += noodles;
			menucount  += 1;
			m20 = 1;
			mc20 += 1;
		}
		
		else if (menuchoice == 9)
		{
			totalPrice += fried_rice;
			menucount  += 1;
			m21 = 1;
			mc21 += 1;
		}
		
		else if (menuchoice == 10)
		{
			totalPrice += chicken_jalfrezi;
			menucount  += 1;
			m22 = 1;
			mc22 += 1;
		}
    }
	
	while (menuchoice != 20);
	clrscr();
	
}
/* Chinese menu main function end */

void italianmain()
{
	int pizza		 = 90,
		spaghetti	 = 110, 
		risotto 	 = 160,
		carbonora 	 = 190,
		lasagne 	 = 250,
		gelato  	 = 290,
		pesto 		 = 350,
		tiramisu 	 = 400,
		polenta 	 = 500,
		antipasto 	 = 590;
		
	do
	{
		clrscr();
		italian_dishes(); // calling italian dishes menu function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += pizza;
			menucount  += 1;
			i12 = 1;
			ic12 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += spaghetti;
			menucount  += 1;
			i13 = 1;
			ic13 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += risotto;
			menucount  += 1;
			i14 = 1;
			ic14 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += carbonora;
			menucount  += 1;
			i15 = 1;
			ic15 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += lasagne;
			menucount  += 1;
			i16 = 1;
			ic16 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += gelato;
			menucount  += 1;
			i17 = 1;
			ic17 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += pesto;
			menucount  += 1;
			i18 = 1;
			ic18 += 1;
		}
		
		else if (menuchoice == 7)
		{
			totalPrice += tiramisu;
			menucount  += 1;
			i19 = 1;
			ic19 += 1;
		}
		
		else if (menuchoice == 8)
		{
			totalPrice += polenta;
			menucount  += 1;
			i20 = 1;
			ic20 += 1;
		}
		
		else if (menuchoice == 9)
		{
			totalPrice += antipasto;
			menucount  += 1;
			i21 = 1;
			ic21 += 1;
		}

    }
	
	while (menuchoice != 20);
	clrscr();

}

/* Salad main function start */
void saladmain()
{
	int applecoleslaw	 = 70,
		chines_salad	 = 90, 
		darbari_salad 	 = 120,
		egg_salad 	 	 = 60,
		fresh_salad 	 = 80,
		pasta_salad  	 = 90;
		
	do
	{
		clrscr();
		salads(); // calling salad function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += applecoleslaw;
			menucount  += 1;
			a1 = 1;
			ac1 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += chines_salad;
			menucount  += 1;
			a2 = 1;
			ac2 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += darbari_salad;
			menucount  += 1;
			a3 = 1;
			ac3 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += egg_salad;
			menucount  += 1;
			a4 = 1;
			ac4 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += fresh_salad;
			menucount  += 1;
			a5 = 1;
			ac5 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += pasta_salad;
			menucount  += 1;
			a6 = 1;
			ac6 += 1;
		}

    }
	
	while (menuchoice != 20);
	clrscr();

}
/* Salad main function end */

/* Sauce menu main function start */
void saucemain()
{
	int chutney		 = 90,
		garlic_sauce = 70, 
		cheese_sauce = 110,
		raita 		 = 80,
		salsa 		 = 90,
		tartar  	 = 100,
		thai_sauce 	 = 120;
		
	do
	{
		clrscr();
		sauces(); // calling sauce function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += chutney;
			menucount  += 1;
			a7 = 1;
			ac7 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += garlic_sauce;
			menucount  += 1;
			a8 = 1;
			ac8 += 1;
        }
		
		else if (menuchoice == 2)
		{
            totalPrice += cheese_sauce;
			menucount  += 1;
			a9 = 1;
			ac9 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += raita;
			menucount  += 1;
			a10 = 1;
			ac10 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += salsa;
			menucount  += 1;
			a11 = 1;
			ac11 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += tartar;
			menucount  += 1;
			a12 = 1;
			ac12 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += thai_sauce;
			menucount  += 1;
			a13 = 1;
			ac13 += 1;
		}

    }
	
	while (menuchoice != 20);
	clrscr();

}
/* Sauce main function end */

/* Bbq main function start */
void bbqmain()
{
	int chatpata_tikka		= 280,
		chicken_tukri_kabab	= 150, 
		turkish_kabab 	 	= 180,
		shami_kabab 	 	= 100,
		malai_boti			= 250,
		chargha				= 650;
		
	do
	{
		clrscr();
		bbq(); // calling salad function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += chatpata_tikka;
			menucount  += 1;
			a14 = 1;
			ac14 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += chicken_tukri_kabab;
			menucount  += 1;
			a15 = 1;
			ac15 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += turkish_kabab;
			menucount  += 1;
			a16 = 1;
			ac16 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += shami_kabab;
			menucount  += 1;
			a17 = 1;
			ac17 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += malai_boti;
			menucount  += 1;
			a18 = 1;
			ac18 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += chargha;
			menucount  += 1;
			a19 = 1;
			ac19 += 1;
		}

    }
	
	while(menuchoice != 20);
	clrscr();

}
/* Bbq main function end */

/* Pakistani menu main function start */
void paksitanimain()
{
	int masala_biryani 		= 200,
		shahi_daleem 		= 150,
		mutton_kunna_paya 	= 180,
		chapli_kabab 		= 120,
		chicken_cheese_ball = 90,
		dum_qeema		    = 70,
		aloo_ki_bhujiya 	= 60,
		channa_curry	    = 20,
		kacori_puri 		= 100,
		suji_ka_halwa 		= 150,
		achar 				= 50;
		
	do
	{
		clrscr();
		pakistani(); // calling salad function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += masala_biryani;
			menucount  += 1;
			i1 = 1;
			ic1 += 1;
			
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += shahi_daleem;
			menucount  += 1;
			i2 = 1;
			ic2 += 1;
        }
		
		else if (menuchoice == 2)
		{
            totalPrice += mutton_kunna_paya;
			menucount  += 1;
			i3 = 1;
			ic3 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += chapli_kabab;
			menucount  += 1;
			i4 = 1;
			ic4 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += chicken_cheese_ball;
			menucount  += 1;
			i5 = 1;
			ic5 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += dum_qeema;
			menucount  += 1;
			i6 = 1;
			ic6 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += aloo_ki_bhujiya;
			menucount  += 1;
			i7 = 1;
			ic7 += 1;
		}

		else if (menuchoice == 7)
		{
			totalPrice += channa_curry;
			menucount  += 1;
			i8 = 1;
			ic8 += 1;
		}

		else if (menuchoice == 8)
		{
			totalPrice += kacori_puri;
			menucount  += 1;
			i9 = 1;
			ic9 += 1;
		}

		else if (menuchoice == 9)
		{
			totalPrice += suji_ka_halwa;
			menucount  += 1;
			i10 = 1;
			ic10 += 1;
		}
		
		else if (menuchoice == 10)
		{
			totalPrice += achar;
			menucount  += 1;
			i11 = 1;
			ic11 += 1;
		}

    }
	
	while(menuchoice != 20);
	clrscr();

}
/* Pakistani menu main function end */

/* Breakfast menu main function start */
void breakfastmain()
{
	int boiled_egg = 60,
		paratha = 20,
		tea = 30,
		coffee = 40,
		pancake = 50,
		omelette = 70,
		sandwich = 60,
		fresh_juice =100;
		
	do
	{
		clrscr();
		breakfast(); // calling salad function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += boiled_egg;
			menucount  += 1;
			b7 = 1;
			bc7 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += paratha;
			menucount  += 1;
			b8 = 1;
			bc8 += 1;
        }
		
		else if (menuchoice == 2)
		{
            totalPrice += tea;
			menucount  += 1;
			b9 = 1;
			bc9 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += coffee;
			menucount  += 1;
			b10 = 1;
			bc10 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += pancake;
			menucount  += 1;
			b11 = 1;
			bc11 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += omelette;
			menucount  += 1;
			b12 = 1;
			bc12 += 1;
		}
		
		else if (menuchoice == 6)
		{
			totalPrice += sandwich;
			menucount  += 1;
			b13 = 1;
			bc13 += 1;
		}

		else if (menuchoice == 7)
		{
			totalPrice += fresh_juice;
			menucount  += 1;
			b14 = 1;
			bc14 += 1;
		}

    }
	
	while(menuchoice != 20);
	clrscr();
	bill();
}
/* Breakfast menu main function end */

/* Continental menu main function start */
void continentalmain()
{
	int chicken_quich = 120,
		chicken_patties = 30,
		c_balls = 20,
		c_sandwich = 140,
		fries = 100,
		shahi_malai_boti = 170;
		
	do
	{
		clrscr();
		continental(); // calling salad function
        
		printf(" \t\t\t\t\t\t\t\t Enter 20 to Exit \n\n");
        	printf(" \t\t\t\t\t\t\t\t Enter an item: ");
        	scanf("%i", &menuchoice);
 
        if (menuchoice == 0)
		{
            totalPrice += chicken_quich;
			menucount  += 1;
			b1 = 1;
			bc1 += 1;
        }
		
        else if (menuchoice == 1)
		{
            totalPrice += chicken_patties;
			menucount  += 1;
			b2 = 1;
			bc2 += 1;
        }
		else if (menuchoice == 2)
		{
            totalPrice += c_balls;
			menucount  += 1;
			b3 = 1;
			bc3 += 1;
		}
		
        else if (menuchoice == 3)
		{
			totalPrice += c_sandwich;
			menucount  += 1;
			b4 = 1;
			bc4 += 1;
		}
		
		else if (menuchoice == 4)
		{
			totalPrice += fries;
			menucount  += 1;
			b5 = 1;
			bc5 += 1;
		}
		
		else if (menuchoice == 5)
		{
			totalPrice += shahi_malai_boti;
			menucount  += 1;
			b6 = 1;
			bc6 += 1;
		}

    }
	while(menuchoice != 20);
	clrscr();

}
/* Continental menu main function end */

						/* ------------------- All main function end ------------------- */

/* Admin function start */
void admin()
{
	int choice,check;
	
	char username[10] = "wrong", password[10] = "wrong";

	clrscr();
	printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
	printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
	printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 ADMIN PORTAL\n");
	printf("\n \t\t\t\t\t\t\t\t ********************** LOGIN ********************** \n");
	printf("\n \t\t\t\t\t\t\t\t <> Username: ");
	scanf("%s", &username);
	printf("\n \t\t\t\t\t\t\t\t <> Password: ");
	scanf("%s",&password);
	
	do
	{
		if( strcmp(username,"muneeb") == 0 && strcmp(password,"maju") == 0 || strcmp(username,"moiz") == 0 && strcmp(password,"maju") == 0 )
		{
			printf("\n \t\t\t\t\t\t\t\t **************************************************** \n");
			printf("\n \t\t\t\t\t\t\t\t  <1> Check 5 star Dining Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <2> Check Casual Dining Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <3> Check Chinese Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <4> Check Italian Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <5> Check Mexican Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <6> Check Salads Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <7> Check Sauces Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <8> Check B.B.Q Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <9> Check BreakFast Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <10> Check Continental Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <11> Check Pakistani Menu \n");
			printf("\n \t\t\t\t\t\t\t\t  <12> Check Staff \n"); 
			printf("\n \t\t\t\t\t\t\t\t  <13> Exit Program \n");
			printf("\n \t\t\t\t\t\t\t\t  Enter your choice: \n");
			scanf("%d", &choice);
			
			if(choice==1)
			{
				clrscr();
				fivestarmenu();
			}
			
			else if(choice==2)
			{
				clrscr();
				casualmenu();
			}

			else if(choice==3)
			{
				clrscr();
				chinese_dishes();				
			}
			
			else if(choice == 4)
			{
				clrscr();
				italian_dishes();
			}
			
			else if(choice == 5)
			{
				clrscr();
				mexican_dishes();
			}
			
			else if(choice == 6)
			{
				clrscr();
				salads();
			}
			
			else if(choice == 7)
			{
				clrscr();
				sauces();
			}
			
			else if(choice == 8)
			{
				clrscr();
				bbq();
			}
			
			else if(choice == 9)
			{
				clrscr();
				breakfast();
			}
			
			else if(choice == 10)
			{
				clrscr();
				continental();
			}
			
			else if(choice == 11)
			{
				clrscr();
				pakistani();
			}
			
			else if(choice == 12)
			{
				clrscr();
				printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB\xDB \n");
				printf("\n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 ADMIN PORTAL\n");
				printf("\n \n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2  10 Waiters");
				printf("\n \n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2  05 Chefs");
				printf("\n \n \t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2  04 Cleaning Department");
			}	
			
			else
			{
				check  = 1;
				break;
		
		}
		}
		
		else
		{
			if(choice == 13)
			{
					
			}
			else
			{
				printf("\n \t\t\t\t\t\t Invalid Input");
				choice = 13;
			}
		}
	}
	
	while (choice != 13);
	
	if(check == 1)
	{
		printf("\n \t\t\t\t\t\t !!! Logged Out !!!");
	}
	
	else
	{
		
	}		
}
/* Admin function end */

						/* ------------------- Menu Functions Start (To Print Menus) ------------------- */

/* Casual menu function start */
void casualmenu()
{
	int i;
	char menu[15][30] = 
	{
		"Beef roll \t\t",
		"Chicken roll           ",
		"Chicken Malai Boti Roll",
		"Chicken Cheese Roll \t",
		"Chicken Mayo Garlic \t",
		"Chicken Tikka (Leg) \t",
		"Beef Burger \t\t",
		"Chicken Burger \t",
		"Zinger Burger \t",
		"Special Burger \t",
		"Veg Chowmein \t",
		"Chicken Chowmein \t",
		"Chicken Manchurian \t",
		"Broast \t\t",
		"Pizza  \t\t"
	};
			 
	int mprices[15] = 
	{
		50,
		60,
		80,
		100,
		120,
		140,
		120,
		130,
		190,
		210,
		90,
		150,
		160,
		190,
		280
	};
			 
	printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CASUAL DINING MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 15; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,menu[i], mprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
}
/* Casual menu function end */

/* 5star menu function */
void fivestarmenu()
{
	int i;
	char fivemenu[18][30] = 
	{
		"Chicken Ping Pong \t",
		"Chicken Nuggets \t",
		"Fire It Up \t\t",
		"Zee Zaad \t\t",
		"Double Burger \t",
		"Five Star Burger \t",
		"Chicken Cheese Burger ",
		"Five Star Wrap \t",
		"Hot Shots \t\t",
		"Chicken Tikka Pizza ",
		"Chicken Fajita Pizza ",
		"Seekh Kabab \t\t",
		"Prawns \t\t",
		"Fried Fish \t\t",
		"Prawns Biryani \t",
		"Prawns Soup \t\t",
		"Chicken White Karahi ",
		"Balochi Tikka \t"
	};
			 
	int fmprices[18] = 
	{
		90,
		120,
		100,
		60,
		100,
		240,
		260,
		660,
		120,
		999,
		1025,
		210,
		450,
		90,
		150,
		160,
		880,
		280
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 FIVE STAR MENU \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 18; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,fivemenu[i], fmprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* 5star menu function end */

/* Mexican dishes start */
void mexican_dishes()
{
	int i;
	char mexicanitem[11][30] = 
	{
		"Taco \t\t\t",
		"Maize \t\t",
		"Salsa \t\t",
		"Enchilada \t\t",
		"Avocado \t\t",
		"Guacamole \t\t",
		"Tamale \t\t",
		"Burrito \t\t",
		"Quesadilla \t\t",
		"Tostada \t\t",
		"Refried Beans\t"
	};
			 
	int mexcianprices[11] = 
	{
		200,
		150,
		300,
		160,
		290,
		310,
		160,
		270,
		320,
		450,
		280
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 Mexican Dishes \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 11; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,mexicanitem[i], mexcianprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Mexican dishes function end */	

/* Chinese menu function start */

void chinese_dishes()
{
	int i;
	char chineseitem[11][30] = 
	{
		"Sweet Sour Pork \t",
		"Kung Pao Chicken \t",
		"Ma Po Tofu \t\t",
		"Wontons \t\t",
		"Dumplings \t\t",
		"Chow Mein \t\t",
		"Peking Roasted Duck \t",
		"Spring Rolls \t\t",
		"Noodles \t\t",
		"Fried Rice \t\t",
		"chicken Jalfrezi \t"
	};
				
	int chineseprices[11] = 
	{
		100,
		120,
		135,
		170,
		210,
		666,
		720,
		800,
		850,
		999,
		700
	};
										
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CHINESE DISHES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 11; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,chineseitem[i], chineseprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Chinese menu function end*/

/* Italian menu function start */
void italian_dishes()
{
	int i;
	char italianitem[10][25] = 
	{
		"Pizza \t\t",
		"Spaghetti \t\t",
		"Risotto \t\t",
		"Carbonora \t\t",
		"Lasagne \t\t",
		"Gelato \t\t",
		"Pesto \t\t",
		"Tiramisu \t\t",
		"Polenta \t\t",
		"Antipasto \t\t",
	};	
	
	int italianprices[10] = 
	{
		90,
		110,
		160,
		190,
		250,
		290,
		350,
		400,
		500,
		590
	};
					
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ITALIAN DISHES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 10; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,italianitem[i], italianprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Italian menu function end */

/* Salad menu function start */
void salads()
{
	int i;
	char saladitem[6][25] = 
	{
		"Apple Coleslaw \t",
		"Chinese Potato Salad \t",
		"Darbari Salad \t",
		"Egg Plant Salad \t",
		"Fresh Cut Veg Salad ",
		"Pasta Salad \t\t"
	};
		 
	int saladprices[6] = 
	{
		70,
		90,
		120,
		60,
		80,
		90
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SALADS \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 6; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i, saladitem[i], saladprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Salad menu function end */

/* Sauce menu function start */
void sauces()
{
	int i;
	char saucesitem[7][25] = 
	{
		"Chutney (Imli) \t",
		"Garlic Sauce \t\t",
		"Cheese Sauce \t\t",
		"Raita (Mint) \t\t",
		"Salsa Sauce \t\t",
		"Tartar Sauce \t\t",
		"Thai Sweet Chili Sauce"
	};
		
	int sausesprices[7] = 
	{
		90,
		70,
		110,
		80,
		90,
		100,
		120
	};

	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 SAUCES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 7; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,saucesitem[i], sausesprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Sauce menu function end */

/* Bbq menu function start */
void bbq()
{
	int i;
	char bbqitem[7][30] = 
	{
		"Chatpata Tikka \t",
		"Chicken Tukri Kabab \t",
		"Turkish Kabab \t",
		"Shami Kabab \t\t",
		"Malai Boti \t\t",
		"Chargha \t\t"
	};
	
	int bbqprices[6] = 
	{
		280,
		150,
		180,
		220,
		250,
		650
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 B.B.Q \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 6; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,bbqitem[i], bbqprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Bbq menu function end */

/* Pakistani menu function start */
void pakistani()
{
	int i;
	char pakitem[11][30] = 
	{
		
		"Masala Biryani \t",
		"Shahi Daleem \t\t",
		"Mutton Kunna Paya \t",
		"Chapli Kabab \t\t",
		"Chicken Cheese Ball \t",
		"Dum Qeema \t\t",
		"Aloo ki Bhujiya \t",
		"Channa Curry \t\t",
		"Kacori / Puri \t",
		"Suji Ka Halwa \t",
		"Achar \t\t"
		
	};
	
	int pakprices[11] = 
	{
		200,
		150,
		180,
		120,
		90,
		70,
		60,
		20,
		100,
		150,
		50
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 PAKISTANI DISHES \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 11; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,pakitem[i], pakprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Pakistani menu function end */								
						
/* Breakfast menu function start */
void breakfast()
{
	int i;
	char breakitem[8][30] = 
	{
		"Boiled Egg \t\t",
		"Paratha \t\t",
		"Tea \t\t\t",
		"Coffee \t\t",
		"Pancake \t\t",
		"Omelette \t\t",
		"Sandwich \t\t",
		"Fresh Juice \t\t"
	};
	
	int breakprices[8] = 
	{
		60,
		20,
		30,
		40,
		50,
		70,
		60,
		100
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 BREAK FAST \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 8; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,breakitem[i], breakprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Breakfast menu function end */						
						
/* Continental menu function start */
void continental()
{
	int i;
	char breakitem[6][30] = 
	{
		"Chicken Quich \t",
		"Chicken Patties \t",
		"Chicken Cheese Ball \t",
		"Chicken Sandwich \t",
		"French Fries \t\t",
		"Shahi Malai Boti Pizza "
	};
	
	int breakprices[6] = 
	{
		120,
		30,
		20,
		140,
		100,
		170
	};
	
	printf(" \n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 CONTINENTAL \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
	for(i = 0; i < 6; i++)
	{
		printf("\t\t\t\t\t\t\t\t \xDB\xDB\xDB\xDB\xB2 %d. %s  \t\t Rs.%d \n\n",i,breakitem[i], breakprices[i]);
	}
	
	printf("\t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n\n");
	
}
/* Continental menu function end */
						
						/* ------------------- Menu Functions End ------------------- */
						
/* Bill Function start */
void bill()
{
	float tax;
	
	printf("\n \t\t\t\t\t\t\t\t \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 ROTIKOT RESTAURANT \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2 \n");
	printf("\n \t\t\t\t\t\t\t\t\t\t\t\t\t\t Server : MHM");
	datetime(); // calling date and time function
	printf("\n \t\t\t\t\t\t\t\t ----------------------------------------------------");
	
	printf("\n \t\t\t\t\t\t\t\t Customer Name: %s",customername);
	
	printf("\n \t\t\t\t\t\t\t\t ---------------------------------------------------- \n");
	
	/* casual menu conditions start ---------*/
	if(f1 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Beef Roll \t\t\t\t\t\t %d \n", fc1);
	}
	
	if(f2 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Roll \t\t\t\t\t %d \n",fc2);
	}
	
	if(f3 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Malai Boti roll \t\t\t\t %d \n",fc3);
	}
	if(f4 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Cheese Roll \t\t\t\t\t %d \n", fc4);
	}
	
	if(f5 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Mayo Garlic \t\t\t\t\t %d \n",fc5);
	}
	
	if(f6 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Tikka \t\t\t\t\t %d \n",fc6);
	}
	
	if(f7 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Beef Burger \t\t\t\t\t\t %d \n", fc7);
	}
	
	if(f8 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Burger \t\t\t\t\t %d \n",fc8);
	}
	
	if(f9 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Zinger Burger \t\t\t\t\t %d \n",fc9);
	}
	
	if(f10 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Special Burger \t\t\t\t\t %d \n", fc10);
	}
	
	if(f11 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Veg Chowmein \t\t\t\t\t %d \n",fc11);
	}
	
	if(f12 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Chowmein \t\t\t\t\t %d \n",fc12);
	}
	
	if(f13 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Manchurian \t\t\t\t\t %d \n",fc13);
	}
	
	if(f14 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Broast \t\t\t\t\t\t %d \n",fc14);
	}
	
	if(f15 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Pizza \t\t\t\t\t\t %d \n",fc15);
	}
	/* casual menu conditions end ---------*/
	
	/* five star menu condition start ---------*/
	if(f16 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Ping Pong \t\t\t\t\t %d \n", fc16);
	}
	
	if(f17 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Nuggets \t\t\t\t\t %d \n",fc17);
	}
	
	if(f18 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Fire It Up \t\t\t\t\t\t %d \n",fc18);
	}
	
	if(f19 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Zee Zaad \t\t\t\t\t\t %d \n", fc19);
	}
	
	if(f20 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Double Burger \t\t\t\t\t %d \n",fc20);
	}
	
	if(f21 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Five Star Burger \t\t\t\t\t %d \n",fc21);
	}
	
	if(f22 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Cheese Burger \t\t\t\t %d \n", fc22);
	}
	
	if(f23 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Five Star Wrap \t\t\t\t\t %d \n", fc23);
	}
	
	if(f24 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Hot Shots \t\t\t\t\t\t %d \n", fc24);
	}
	
	if(f25 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Tikka Pizza \t\t\t\t\t %d \n",fc25);
	}
	
	if(f26 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Fajita Pizza \t\t\t\t %d \n",fc26);
	}
	
	if(f27 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Seekh Kabab \t\t\t\t\t\t %d \n", fc27);
	}
	
	if(f28 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Prawns \t\t\t\t\t\t %d \n",fc28);
	}
	
	if(f29 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Fried Fish \t\t\t\t\t\t %d \n",fc29);
	}
	
	if(f30 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Prawns Biryani \t\t\t\t\t %d \n",fc30);
	}
	
	if(f31 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Prawns Soup \t\t\t\t\t\t %d \n",fc31);
	}
	
	if(f32 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken White Karahi \t\t\t\t %d \n",fc32);
	}
	
	if(f33 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Balochi Tikka \t\t\t\t\t %d \n",fc33);
	}
	/* five star menu function end */
	
	/* mexican menu conditions start */
	if(m1 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Taco \t\t\t\t\t\t %d \n", mc1);
	}
	
	if(m2 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Maize \t\t\t\t\t\t %d \n",mc2);
	}
	
	if(m3 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Salsa \t\t\t\t\t\t %d \n",mc3);
	}
	
	if(m4 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Enchilada \t\t\t\t\t\t %d \n", mc4);
	}
	
	if(m5 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Avocado \t\t\t\t\t\t %d \n",mc5);
	}
	
	if(m6 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Guacamole \t\t\t\t\t\t %d \n",mc6);
	}
	
	if(m7 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Tamale \t\t\t\t\t\t %d \n", mc7);
	}
	
	if(m8 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Burrito \t\t\t\t\t\t %d \n",mc8);
	}
	
	if(m9 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Quesadilla \t\t\t\t\t\t %d \n",mc9);
	}
	
	if(m10 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Tostada \t\t\t\t\t\t %d \n", mc10);
	}
	
	if(m11 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Refried Beans \t\t\t\t\t %d \n",mc11);
	}
	/* mexican menu conditions end */
	
	/* chinese menu conditions start */
	if(m12 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Sweet Sour Pork \t\t\t\t\t %d \n",mc12);
	}
	
	if(m13 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Kung Pao Chicken \t\t\t\t\t %d \n",mc13);
	}
	if(m14 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Ma Po Tofu \t\t\t\t\t\t %d \n",mc14);
	}
	
	if(m15 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Wontons \t\t\t\t\t\t %d \n",mc15);
	}
	
	if(m16 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Dumplings \t\t\t\t\t\t %d \n", mc16);
	}
	
	if(m17 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chow Mein \t\t\t\t\t\t %d \n",mc17);
	}
	
	if(m18 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Peking Roasted Duck \t\t\t\t\t %d \n",mc18);
	}
	
	if(m19 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Spring Rolls \t\t\t\t\t %d \n", mc19);
	}
	
	if(m20 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Noodles \t\t\t\t\t\t %d \n",mc20);
	}
	if(m21 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Fried Rice \t\t\t\t\t\t %d \n",mc21);
	}
	
	if(m22 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Jalfrezi \t\t\t\t\t %d \n", mc22);
	}
	/* chinese menu conditions end */
	
	/* pakistani menu condition start */
	if(i1 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Masala Biryani \t\t\t\t\t %d \n", ic1);
	}
	
	if(i2 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Shahi Daleem \t\t\t\t\t %d \n",ic2);
	}
	
	if(i3 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Mutton Kunna \t\t\t\t\t %d \n",ic3);
	}
	
	if(i4 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chapli Kabab \t\t\t\t\t %d \n", ic4);
	}
	
	if(i5 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Cheese Ball \t\t\t\t\t %d \n",ic5);
	}
	
	if(i6 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Dum Qeema \t\t\t\t\t\t %d \n",ic6);
	}
	
	if(i7 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Aloo Ki Bhujiya \t\t\t\t\t %d \n", ic7);
	}
	
	if(i8 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Channa Curry \t\t\t\t\t %d \n",ic8);
	}
	
	if(i9 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Kacori / Puri \t\t\t\t\t %d \n",ic9);
	}
	
	if(i10 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Suji ka halwa \t\t\t\t\t %d \n", ic10);
	}
	
	if(i11 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Achar \t\t\t\t\t\t %d \n",ic11);
	}
	/* pakisatni menu conditions end */
	
	/* italian menu conditions start */
	if(i12 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Pizza \t\t\t\t\t\t %d \n",ic12);
	}
	
	if(i13 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Spaghetti \t\t\t\t\t\t %d \n",ic13);
	}
	
	if(i14 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Risotto \t\t\t\t\t\t %d \n",ic14);
	}
	
	if(i15 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Carbonora \t\t\t\t\t\t %d \n",ic15);
	}
	
	if(i16 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Lasegne \t\t\t\t\t\t %d \n", ic16);
	}
	
	if(i17 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Gelato \t\t\t\t\t\t %d \n",ic17);
	}
	
	if(i18 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Pesto \t\t\t\t\t\t %d \n",ic18);
	}
	
	if(i19 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Tiramisu \t\t\t\t\t\t %d \n", ic19);
	}
	
	if(i20 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Polenta \t\t\t\t\t\t %d \n",ic20);
	}
	
	if(i21 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Antipasto \t\t\t\t\t\t %d \n",ic21);
	}
	/* italian menu conditions end */
	
	/* Salad menu condition start */
	if(a1 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Apple Coleslaw \t\t\t\t\t %d \n", ac1);
	}
	
	if(a2 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chinese Potato Salad \t\t\t\t %d \n",ac2);
	}
	
	if(a3 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Darbari Salad \t\t\t\t\t %d \n",ac3);
	}
	
	if(a4 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Egg Plant Salad \t\t\t\t\t %d \n", ac4);
	}
	
	if(a5 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Fresh Cut Veg Salad \t\t\t\t\t %d \n",ac5);
	}
	
	if(a6 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Pasta Salad \t\t\t\t\t\t %d \n",ac6);
	}
	/* Salad menu condition end */
	
	/* Sauces menu condition start */
	if(a7 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chutney (Imly) \t\t\t\t\t %d \n",ac7);
	}
	
	if(a8 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Garlic Sauce \t\t\t\t\t %d \n", ac8);
	}
	
	if(a9 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Cheese Sauce \t\t\t\t\t %d \n",ac9);
	}
	
	if(a10 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Raita (Mint) \t\t\t\t\t %d \n",ac10);
	}
	
	if(a11 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Salsa Sauce \t\t\t\t\t\t %d \n", ac11);
	}
	
	if(a12 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Tartar Sauce \t\t\t\t\t %d \n",ac12);
	}
	
	if(a13 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Thai Sweet Chili Sauce \t\t\t\t %d \n",ac13);
	}
	/* Sauces menu condition end */
	
	/* Bbq menu conditions start */
	if(a14 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chatpata Tikka \t\t\t\t\t %d \n", ac14);
	}
	
	if(a15 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Tukri Kabab \t\t\t\t\t %d \n",ac15);
	}
	
	if(a16 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Turkish kabab \t\t\t\t\t %d \n",ac16);
	}
	
	if(a17 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Shami Kabab \t\t\t\t\t\t %d \n", ac17);
	}
	
	if(a18 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Malai Boti \t\t\t\t\t\t %d \n",ac18);
	}
	
	if(a19 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chargha \t\t\t\t\t\t %d \n",ac19);
	}
	/* Bbq menu conditions end */
	
	/* Continental menu conditions start */
	if(b1 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Quich \t\t\t\t\t %d \n", bc1);
	}
	
	if(b2 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Patties \t\t\t\t\t %d \n",bc2);
	}
	if(b3 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Cheese Ball \t\t\t\t\t %d \n",bc3);
	}
	if(b4 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Chicken Sandwich \t\t\t\t\t %d \n", bc4);
	}
	
	if(b5 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * French Fries \t\t\t\t\t %d \n",bc5);
	}
	if(b6 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Shahi Malai Boti Pizza \t\t\t\t %d \n",bc6);
	}
	/* Continental menu conditions end */
	
	/* Breakfast menu conditions start */
	if(b7 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Boiled Egg	\t\t\t\t\t %d \n", bc7);
	}
	
	if(b8 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Paratha \t\t\t\t\t\t %d \n",bc8);
	}
	
	if(b9 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Tea \t\t\t\t\t\t\t %d \n",bc9);
	}
	if(b10 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Coffee \t\t\t\t\t\t %d \n", bc10);
	}
	
	if(b11 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Pancake \t\t\t\t\t\t %d \n",bc11);
	}
	
	if(b12 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Omelette \t\t\t\t\t\t %d \n",bc12);
	}
	
	if(b13 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Sandwich \t\t\t\t\t\t %d \n",bc13);
	}
	
	if(b14 == 1)
	{
		printf("\n \t\t\t\t\t\t\t\t * Fresh Juice \t\t\t\t\t\t %d \n",bc14);
	}
	/* Breakfast menu conditions end */
	
	printf("\n \t\t\t\t\t\t\t\t ----------------------------------------------------");
	printf("\n \t\t\t\t\t\t\t\t Total Dishes: \t\t\t\t\t\t %d ",menucount); // getting the value from global variable
	printf("\n \t\t\t\t\t\t\t\t ----------------------------------------------------");
	
	tax = 0.05 * totalPrice;
	printf("\n \t\t\t\t\t\t\t\t\t\t\t\t\tTax:     %.2f", tax);
	printf("\n \t\t\t\t\t\t\t\t\t\t\t\t\tT.Price: %.2f", totalPrice);
	
	totalPrice += tax;
	printf("\n \t\t\t\t\t\t\t\t ----------------------------------------------------");
	printf("\n \t\t\t\t\t\t\t\t\t\t Total to Pay  %.2lf \n", totalPrice); // getting the value from global variable
    printf("\t\t\t\t\t\t\t\t ----------------------------------------------------");

}
/* Bill Function end */

/* Date and time function start */
void datetime()
{
	time_t t;   // not a primitive datatype
    time(&t);
    printf("\n \t\t\t\t\t\t\t\t\t\t\t     %s", ctime(&t));
}
/* Date and time function end */

/* Clear screen function start */
void clrscr()
{
	system("cls");
}
/* Clear screen function end */