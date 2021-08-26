#include<stdio.h>

int main()
{
   int money[]={1000,500,100,50,20,10,5,2,1};  //money to disbursed
   int withdraw_amt=0;                         //For store withdrawl amount
   int i=0,r; 
//   clrscr();
   printf(" Enter An Amount to Withdraw : ");
   scanf("%d",&withdraw_amt);
   while(withdraw_amt >0)
   {
        r=withdraw_amt/money[i]; // Withdrawl amount devided by each money sets on above
        withdraw_amt= withdraw_amt%money[i]; //a reminder will set again withdrawal amount.
        printf(" Please Collect note of %4d baht : %4d \n",money[i],r);
        i++;
   }
   printf(" THANKS FOR USING OUR ATM SERVICE ");
//   getch();
}
