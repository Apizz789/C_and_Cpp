#include <stdio.h>

int main()
{
 float x, y, z;
 
 printf(" *** Check for right triangle (3 floats with maximum of 4 places decimal digits) ***\n");
 printf("Enter 3 sides of triangle : ");
 scanf("%f %f %f", &x, &y, &z);
 
 if ((x==0 ||x>y+z)||(y==0||y>x+z)||(z==0||z>x+y))
{
printf("%.4f, %.4f and %.4f are NOT sides of triangle.", x, y, z);
}
else 
{
	if ((z*z+y*y-x*x<0.00000001)||(x*x+y*y-z*z<0.00000001)||(x*x+z*z-y*y<0.0000001))
{
printf("%.4f, %.4f and %.4f are sides of RIGHT triangle.", x, y, z);
}
	else 
{
printf("%.4f, %.4f and %.4f are NOT sides of RIGHT triangle, just a TRIANGLE.", x, y, z);}
}

return 0;
}
