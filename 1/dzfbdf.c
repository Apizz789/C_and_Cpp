#include<stdio.h>
int main()
{
int d;
printf("Enter a number Grade: ");
scanf("%d", &d);
switch (d%10)
{
case 10: puts("A stitch in time saves nine."); break;
case 9 :puts("Handsome is as B+"); break;
case 8 : puts("Handsome is as B"); break;
case 7 : puts("Handsome is as C+"); break;
case 6 : puts("Handsome is as C"); break;
case 5 : puts("Handsome is as D+"); break;
case 4 : puts("Handsome is as D"); break;
default: puts(" FFFFFFF Very clever. Try again.");
}
return 0;
} 
