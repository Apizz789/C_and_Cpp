#include <stdio.h>
int main() 
{
  int a;
  printf(" *** Show a number in variety formats. ***");
  printf("\nEnter a whole number : ");
  scanf("%d",&a);
  printf("You have input : %d",a);
  printf("\nYou have input : %.f",a*1.0);
  printf("\nSquare : %d",a*a);
  printf("\n%d / 17 = %.3f",a,a*1.0/17);
  printf("\n%d / 23 = %f",a,a*1.0/23);
  printf("\n%d / 37 = %.9f",a,a*1.0/37);
  return 0;
}
