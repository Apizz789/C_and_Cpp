#include<stdio.h>
int main()
{
int d;
printf("Enter a number Grade: ");
scanf("%d", &d);
switch (d)
{
case d >=80 :puts("A stitch in time saves nine."); break;
case d >=75 :puts("Handsome is as B+"); break;
case d >=70 : puts("Handsome is as B"); break;
case d >=65 : puts("Handsome is as C+"); break;
case d >=60 : puts("Handsome is as C"); break;
case d >=55 : puts("Handsome is as D+"); break;
case d >=50 : puts("Handsome is as D"); break;
default: puts(" FFFFFFF Very clever. Try again.");
}                        
return 0;
} 
