#include <stdio.h>
#include <math.h>
int main(){
	float X,Y,F;
	scanf("%f",&X);
	scanf("%f",&Y);
	if(X==Y) F=7*pow(X,6);
	else F=(pow(X,7)-pow(Y,7))/(X-Y);
	printf("\n%f",F);
	return 0;
 }
