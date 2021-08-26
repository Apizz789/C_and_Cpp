#include<stdio.h> 

int main() { 
    int n; 
    double num[30],temp,temp2;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%lf ",&num[i]);
    }
    if (n>2) //START //STAGE //STOP
        {
		for(int i=1 ; i<=n ; i++ ){
            unsigned num[i];
            if (num[i]>num[i+1]) {
                temp = num[i];
                num[i] = num[i+1];
                num[i+1] = temp;
            }
        }
    }
    if(n%2==1) { n=(n+1)/2; printf("%.3lf",num[n]);}
    else {n=(n+1)/2; printf("%.3lf",(num[n]+num[n+1])/2);}
    return 0;
}
