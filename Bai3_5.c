#include <stdio.h>

int main()
{
	float x,y;
	scanf("%f%f", &x, &y);
	printf("%f\n%f\n%f", x*x+y*y, (x+y)*(x+y), (x-y)*(x-y));
	return 0;	
}
