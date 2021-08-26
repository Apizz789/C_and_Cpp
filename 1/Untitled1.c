#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	printf(" *** Check for right triangle ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d",&a,&b,&c);

	if (c == (int)sqrt(pow(a,2)+pow(b,2)))
    {
      printf("%d, %d and %d are sides of RIGHT triangle.",a,b,c);
	  //return 0 ;
	}

	else if ( b+c<a || a+c<b || a+b<c)
	{
	  printf("%d, %d and %d are sides of NOT sides of RIGHT triangle, just a TRIANGLE.",a,b,c);
	  //return 0;
	}

	else if ( a==0 || b==0 || c==0 );
	{
	  printf("%d, %d and %d are sides of NOT sides of triangle.",a,b,c);
	 //return 0;
	}
  return 0;
}
