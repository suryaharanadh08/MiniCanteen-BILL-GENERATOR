#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void menu();
void order();
void hot();
void drinks();
void icecreams();
void welcome();
void invoice();
void design();
int i,j,k,l,g=1,z,TOTAL=0;
int itemno[10],quantity[10],price[10];
int main()
     {
      clrscr();
      while(g==1)
     {
      menu();
      order();
      invoice();

      if(g==2)
      break;
    }
      return 0;
    }
 void design()
 { for(i=0,j=1;i<25;i++,j++)
   {
   gotoxy(1,j);
   printf("|_|");
   gotoxy(77,j);
   printf("|_|");
   }
 }


 void menu()
     {

      char menulist[4][15]={"HOT ITEMS","DRINKS","ICECREAMS"};
      clrscr();
      welcome();
      design();
      gotoxy(20,7);
      printf("MENU:");
      gotoxy(20,8);
      printf("----");


      for(i=1,j=0,k=9;i<=3;i++,j++,k++)
       {
	 gotoxy(27,k);
	 printf("%d)%s",i,menulist[j]);
	  k++;
       }
       gotoxy(25,18);
       printf("ENTER YOUR CHOICE:");
       scanf("%d",&z);

       clrscr();

}
void order()
{
   int i,l;
   clrscr();
   welcome();
   design();
   for(i=0;i<=10;i++)
     {
	{
	  if(z==1)
		hot();
	  else if(z==2)
		drinks();
	  else if(z==3)
		icecreams();
	 }
	   gotoxy(15,19);
	   printf("ENTER YOUR CHOICE:");
	   scanf("%d",&itemno[i]);
	   gotoxy(15,20);
	   printf("QUANTITY:");
	   scanf("%d",&quantity[i]);
	   gotoxy(55,19);
	   printf("PRESS 1->ADD ITEM");
	   gotoxy(55,20);
	   printf("PRESS 2-> BILL:");
	   gotoxy(71,20);
	   scanf("%d",&l);
      if(l==2)
      break;
      menu();
  }
}


void hot()
{   int i,j,k;
   char hot[4][30]={"SAMOSA - 10RS/-","EGG PUFF - 20RS/-","CHICKEN PUFF - 35RS/-","PANEER PUFF - 30RS/-"};
   welcome();
   design();
   gotoxy(20,7);
   printf("HOT ITEMS:");
   gotoxy(20,8);
   printf("---------");
   for(i=1,j=0,k=9;i<=4;i++,j++,k++)
   {
    gotoxy(25,k);
    printf("%d) %s",i,hot[j]);
    k++;
   }

}


void drinks()
{
  int i,k,j;
  char drinks[3][25]={"STING(250ml) - 20RS/-","THUMS UP(200ml) - 20RS/-","MAZA(250ml) - 25RS/-"};
   welcome();
   design();
   gotoxy(20,7);
   printf("DRINKS:");
   gotoxy(20,8);
   printf("------");
   for(i=5,j=0,k=10;i<=7;i++,j++,k++)
   {
    gotoxy(28,k);
    printf("%d) %s",i,drinks[j]);
    k++;
   }
}

void icecreams()
   {
     char icecreams[3][30]={"DARK CHOCOLATE - 50 RS/-","CHOCO BROWNIE - 40RS/-","KULFI CONE - 35RS/-"};
     welcome();
     design();
     gotoxy(14,7);
     printf("ICE CREAMS:");
     gotoxy(14,8);
     printf("----------");
     for(i=8,j=0,k=10;i<=10;i++,j++,k++)
   {
    gotoxy(25,k);
    printf("%d) %s",i,icecreams[j]);
    k++;

   }
}

void welcome()

{
    gotoxy(25,3);
    printf("*WELCOME TO MIRACLE CANTEEN*");
    gotoxy(25,4);
    printf(" --------------------------");
}
void invoice()
{
  int count,x,m,n,o,p,q,r;
  time_t now;
  time(&now);
  clrscr();
  welcome();
  design();
  gotoxy(35,5);
  printf("INVOICE");
  gotoxy(35,6);
  printf("-------");
  gotoxy(25,10);
  printf("%s",ctime(&now));
  gotoxy(17,11);
  printf("-------------------------------------------");
  gotoxy(17,12);
  printf("ITEM");
  gotoxy(35,12);
  printf("QUANTITY");
  gotoxy(55,12);
  printf("PRICE");
  gotoxy(17,13);
  printf("-------------------------------------------");
  for(i=0,m=17,n=14,o=35,p=14,q=55,r=14;i<=count;i++,n++,p++,r++)
  {
     x=itemno[i];
     switch(x)
     {
      case 1:
       price[i]=10*quantity[i];
       gotoxy(m,n);
       printf("SAMOSA");
       gotoxy(o,p);
       printf("%d",quantity[i]);
       gotoxy(q,r);
       printf("%d",price[i]);
      break;
      case 2:
	price[i]=20*quantity[i];
	gotoxy(m,n);
	printf("EGG PUFF");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 3:
	price[i]=35*quantity[i];
	gotoxy(m,n);
	printf("CHICKEN PUFF");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 4:
	price[i]=30*quantity[i];
	gotoxy(m,n);
	printf("PANEER PUFF");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 5:
	price[i]=20*quantity[i];
	gotoxy(m,n);
	printf("STING");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 6:
	price[i]=20*quantity[i];
	gotoxy(m,n);
	printf("THUMS UP");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 7:
	price[i]=25*quantity[i];
	gotoxy(m,n);
	printf("MAZA");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 8:
	price[i]=50*quantity[i];
	gotoxy(m,n);
	printf("DARK CHOCOLATE");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 9:
	price[i]=40*quantity[i];
	gotoxy(m,n);
	printf("CHOCO BROWNIE");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
      case 10:
	price[i]=35*quantity[i];
	gotoxy(m,n);
	printf("KULFI CONE");
	gotoxy(o,p);
	printf("%d",quantity[i]);
	gotoxy(q,r);
	printf("%d",price[i]);
	break;
    }

       TOTAL=TOTAL+price[i];
  }    printf("\n|_|             -------------------------------------------");
       printf("\n|_|             TOTAL                                 %d",TOTAL);
       printf("\n|_|             -------------------------------------------");
       gotoxy(13,25);
       printf("[DO YOU WANT TO CONTINUE: ENTER ---->1]  /  [EXIT--->2]:");
       gotoxy(70,25);
       scanf("%d",&g);

}
