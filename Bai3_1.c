#include <stdio.h>
#include <math.h>
int main()
{
	float x,y,z,F;
	scanf("%f%f%f", &x, &y, &z);
	printf("%f", (x+y+z)/(x*x+y*y+1)-fabs(x-z*cos(y)));
	return 0;
}
