#include<stdio.h>
int main(){
	int a,b,h;
	float dientich;
	scanf("%d%d%d", &a, &b, &h);
	if (a<=0||b<=0||h<=0){
		printf("Loi");
	}
	else{
	dientich= (a+b)*h/2;
	printf("%.2f", dientich); 
	}
}

