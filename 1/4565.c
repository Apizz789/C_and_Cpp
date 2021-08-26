#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,i;
	printf(" *** Check for right triangle ***\n");
	printf("Enter 3 sides of triangle : ");
	scanf("%d %d %d",&a,&b,&c);
		
	if  ( a==0 || b==0 || c==0 )
	{
	  printf("%d, %d and %d are sides of NOT sides of RIGHT triangle, just a TRIANGLE.",a,b,c);
	}
//----------------------------------------------------------------------------------------------------------------------------
	else if  ( a<b+c || b<a+c || c<b+a )   	
	{
	  printf("%d, %d and %d are sides of NOT sides of triangle.",a,b,c);
	}

//--------------------------------------------------------------------------------------------------------------------------    
	else if (pow(c,2)==pow(a,2)+pow(b,2) || pow(a,2)==pow(b,2)+pow(c,2) || pow(b,2)==pow(a,2)+pow(c,2))
	{
	   printf("%d, %d and %d are sides of RIGHT triangle.",a,b,c);	
	}
  return 0;
}

