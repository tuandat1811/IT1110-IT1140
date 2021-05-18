/* TIM NGHIEM PHUONG TRINH aX^2 + bX + c = 0
Input: so thuc a,b,c
Output: Nghiem cua phuong trình
*/
#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c, delta;
	scanf("%f%f%f", &a, &b, &c);
	if(a<0){a=-a;b=-b;c=-c;} // Neu a<0 thi dao dau cac he so
	if(a!=0)
	{
		// Phuong trinh co dang ax^2 + bx + c = 0 (a khac 0)
		delta = b*b - 4*a*c;
		if(delta>0) printf("%f\n%f", (-b+sqrt(delta))/2/a,(-b-sqrt(delta))/2/a); // 2 nghiem phan biet
		if(delta==0) printf("%f", -b/2/a); // nghiem kep
		if(delta<0) printf("%f+%fi\n%f-%fi",-b/2/a, sqrt(-delta)/2/a, -b/2/a, sqrt(-delta)/2/a); // nghiem phuc
	}
	else
	{
		// Phuong trinh co dang bx+c=0
		if(b==0 && c!=0) printf("Phuong trinh vo nghiem");
		if(b==0 && c==0) printf("Phuong trinh vo so nghiem");
		if(b!=0) printf("%f", -c/b); // 1 nghiem
	}
}
