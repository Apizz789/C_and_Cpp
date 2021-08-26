#include<stdio.h>
#include<math.h>
main()
{
int choice,choice2;
float withd, depo,bal;
bal=0;
withd=0;
depo=0;
//clrscr();
do
{
//clrscr();
printf("\n\n********** BANK OF AKB ***********\n");
printf("**********************************\n\n");
printf("1. Deposit\n");
printf("2. Withdraw \n");
printf("3. Balance inquiry \n");
printf("4. Fast cash \n");
printf("5. Exit\n");
printf("\nenter choice:");
scanf("%d",&choice);
printf("\n**********************************\n\n");
switch(choice)
{
case 1: printf("\n\n\nDEPOSIT MENU");
printf("\n***************");
printf("\nplease enter deposit amount:");
scanf(" %f",&depo);
if(depo > 0 )
{
bal = bal + depo;
printf("\nyou have deposited %.2f",depo);
printf("\nyour new acount balance is %.2f\n\npress any key to continue:",bal);
}
else
{
printf("\nerror:you can not deposit less than 0" );
printf("\n\n\npress any key to continue:");
}
break;
case 2: printf("\nWITHDRAW MENU");
printf("\n*****************************");
printf("\nyour current ballance is %.2f",bal);
printf("\nplease enter withdraw amount:");
scanf(" %f",&withd);
if(withd = 0)
{
bal = bal - withd;
printf("\nyou have withdrawn %.2f \nyour curent ballance is %d",withd,bal);
}
else
{
printf("\nerror: you have insuficient");
}
printf("\npress any key to continue:");
break;
case 3: printf("\nBALANCE INQUIRY MENU");
printf("\nyour account balance is %.2f",bal);
printf("\npress any key to continue:");
break;
case 4: printf("\nFAST CASH MENU");
printf("\n*****************************");
printf("\nFast cash options\n1. 100\n2. 200\n3. 500\n4. 1000");
printf("\nenter choice:");
scanf("%d",&choice2);
switch(choice2)
{ case 1: if(bal > 100)
{ bal = bal - 100;
withd = 100;
printf("\nyou have withdrawn %.2f\n your curent balance is .%2f",withd,bal);
}
else
{
printf("\ninsuficient funds for this transaction");
}
printf("\npress any key to continue:");
break;
case 2: if(bal > 200)
{ bal= bal - 200;
withd=200;
printf("\nyou have withdrawn %.2f\n your curent balance is .%2f",withd,bal);
}
else
{
printf("\ninsuficient funds for this transaction");
}
printf("\npress any key to continue:");
break;
case 3: if(bal > 500)
{ bal = bal - 500;
withd = 500;
printf("\nyou have withdrawn %.2f\n your curent balance is .%2f",withd,bal);
}
else
{
printf("\ninsuficient funds for this transaction");
}
printf("\npress any key to continue:");
break;
case 4: if(bal > 1000)
{ bal = bal - 1000;
withd = 1000;
printf("you have withdrawn %.2f\n your curent balance is .%2f",withd,bal);
}
else
{
printf("insuficient funds for this transaction");
}
printf("\npress any key to continue:");
break;
}
break;
case 5: printf("thank you for using this ATM, gudbye");
break;
default: printf("\nerror, please sellect from the give options\n\n");
break;
}
}while(choice != 5);
//getch();
}
