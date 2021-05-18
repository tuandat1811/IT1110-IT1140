
#include <stdio.h>
#include <math.h>
int main()
{
	long n,i;
	float s1=1, s2=1, s3=1;
	float x;
	float a=1, b = 1;
	do{
		scanf("%ld", &n);
	}while(n<=0);
	scanf("%f", &x);
	for(i=1;i<=n;++i){
		b *=x;
		s1 += b;
		s2 += pow(-1,i) * b;
		a *= i;
		s3 += b/a;
	}
	printf("%f\n%f\n%f", s1,s2,s3);
}
