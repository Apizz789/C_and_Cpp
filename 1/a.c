#include<stdio.h>
#include<math.h>
int main()
{
    float a[3];
    printf(" *** check for right triangle (3 floats with maximum of 4 places decimal digits) ***");
    printf("\nEnter 3 sides of traiangle : ");
    scanf("%f%f%f",&a[0],&a[1],&a[2]);
    if(a[0]==0 || a[1]==0 || a[2]==0)
    {
        printf("%.4f, %.4f and %.4f Is Not!",a[0],a[1],a[2]); // ตรงนี้แสดงว่าไม่เป็น
        return 0;
    }
    else
    {
    	int i;
        float max=0,min=99999,mid;
        for( i=0;i<3;i++)
        {
            if(a[i]>max) max=a[i];
            if(a[i]<min) min=a[i];
        }
        for( i=0;i<3;i++)
        {
            if(a[i]!=max && a[i]!= min) mid = a[i];
        }
        if(max >= min + mid)
        {
            printf("%.4f, %.4f and %.4f are NOT sides of triangle.",a[0],a[1],a[2]); // ตรงนี้แสดงว่าไม่เป็น
            return 0;
        }
        //printf("%d\n",(max > sqrt(pow(mid,2)+pow(min,2))));
        if((max-0.000001 < sqrt(pow(mid,2)+pow(min,2))) && (max+0.000001 > sqrt(pow(mid,2)+pow(min,2))))
        {
            printf("%.4f, %.4f and %.4f are sides of RIGHT triangle.",a[0],a[1],a[2]); // ตรงนี้แสดงว่าเป็น
            return 0;
        }
        printf("%.4f, %.4f and %.4f are NOT sides of RIGHT triangle, just a TRIANGLE.",a[0],a[1],a[2]);
    }
}
