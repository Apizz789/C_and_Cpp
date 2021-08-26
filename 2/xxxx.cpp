// #include<stdio.h>
//
// main()
// {
// int a, b;
// printf("1.[a b] : ");
// scanf("%d%d", &a, &b); printf("Result : %d %d\n", a, b);
// printf("2.[a-b] : ");
// scanf("%d-%d", &a, &b); printf("Result : %d %d\n", a, b);
// printf("3.[a,b] : ");
// scanf("%d, %d", &a, &b); printf("Result : %d %d\n", a, b);
// printf("4.[aab] : ");
// scanf("%da%d", &a, &b); printf("Result : %d %d" , a, b);
// }
// 
//  #include<stdio.h>
//
// main()
// {
// int n;
// scanf("%*d %d", &n);
// printf("Output : %d", n);
// } 

//#include<stdio.h>
//
//main()
//{   
//    int a, b;    
//    printf("1.[a b] : ");
//    scanf("%d%d",   &a, &b); printf("Result : %d %d\n", a, b);
//    printf("2.[a-b] : ");
//    scanf("%d-%d",  &a, &b); printf("Result : %d %d\n", a, b);
//    printf("3.[a,b] : ");
//    scanf("%d, %d", &a, &b); printf("Result : %d %d\n", a, b);
//    printf("3.[aab] : ");
//    scanf("%da%d",  &a, &b); printf("Result : %d %d\n", a, b);
//}    

//#include<stdio.h>
//
// main()
//{
// char str[20];
// scanf("%4s", &str);
// printf("Output : %s", &str);
// } 

//
//#include<stdio.h>
// int main()
// {
// int score = 75;
// if (score >= 80)                    printf("A");
// else if (score >= 75 && score < 80) printf("B+");
// else if (score >= 70 && score < 75) printf("B");
// else if (score >= 65 && score < 70) printf("C+");
// else if (score >= 60 && score < 65) printf("C");
// else if (score >= 55 && score < 60) printf("D+");
// else if (score >= 50 && score < 55) printf("D");
// else printf("F");
// }

//#include<stdio.h>
//
// main()
// {
// for(int i=0; i<3; i++) {
// for(int j=0; j<4; j++) {
// if(j == 2) continue;
// printf("i = %d, j = %d\n", i, j);
// }
// }
// }
// 
 #include<stdio.h>

 main()
 {
 int a[100];
 int i, n, sum = 0;

 printf("Input the number of elements = ");
 scanf("%d", &n);

 printf("Input %d elements\n", n);
 for(i = 0; i < n; i++)
 {
 printf("elements %d : ", i);
 scanf("%d", &a[i]);
 sum += a[i] ;
 }
 printf("\nSum = %d\n", sum);
 for(i = 0; i < n; i++) printf("a[%d] = %d\n", i, a[i]);
 }


