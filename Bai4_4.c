#include <stdio.h>
int  main()
{
	int a1,b1,a,b,UCLN,BCNN;
	do{
	    scanf("%d",&a);
		scanf("%d",&b);
	}while(a<=0||b<=0);
	a1=a; b1=b;
	while(a!=b){
		if (a>b) a=a-b;
	    else b=b-a;
	}
	UCLN = a;
	BCNN = a1*b1/a;
	printf("%d\n%d", UCLN, BCNN);
}
