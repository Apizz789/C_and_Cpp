#include <stdio.h>
int main(){
	char na[25];
	scanf("%[^\n]s",&na);
	printf("|====================|\n|                    |\n|%(20/na))s         |\n|                    |\n|====================|",na);
}
