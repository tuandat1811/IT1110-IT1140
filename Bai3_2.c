#include <stdio.h>
#include <math.h>
#define PI 3.14159
int main()
{
	float r,M,S;
	scanf("%f", &r);
	M = 2*PI*r;
	S = PI*r*r;
	printf("%f\n%f",M,S);
	return 0;
}
