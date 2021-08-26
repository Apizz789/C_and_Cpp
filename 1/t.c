#include <stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j,counter=0,temp=0;
	printf(" *** Show prime number ***\n");
	printf("Enter 2 positive numbers : ");
	scanf("%d %d",&a,&b); // 1 100
	if (b>a)
	{
		a=a+b;
		b=a-b;
		a=a-b;
	} // b = min a = max
	printf("prime number(s) from %d to %d : ",b,a);
	if(b==1) b++;
	for(i=b;i<=a;i++)
	{
		temp = 0;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				temp = 1;
				break;
			}
		}
		if(temp!=1)
		{
			printf("%d ",i);
			counter++;
		}
	}
	printf("\ntotal prime numbers : %d",counter);
}
