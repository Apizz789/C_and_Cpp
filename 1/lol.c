#include<stdio.h>
int main()
{
	int a,b,c,i,j,x=1;
	printf("INPUT : ");
	scanf("%d",&a);
	for(i=0;i<=a;i++)
	{
//		for(j=0;j<i;j++)
//		{printf("%d",j+1);}
//		printf("\n");


	for(j=0;j<a-i;j++) {printf(" ");}	
	
	for(c=0;c<i;c++)  {printf("%d",j+1); j++;}	
	printf("\n");
	}
//char a,b;
//printf("INPUT : ");
//scanf("%c %c",&a,&b);
//printf("OUTPUT : %d",b-a);

}
