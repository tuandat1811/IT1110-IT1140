#include <stdio.h>
void swap(int *a, int *b)
{
	// Hoan doi 2 bien a va b
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int n, a[10001], i, j;
	// Nhap tu ban phim
	scanf("%d", &n);
	for(i=0;i<n;++i) scanf("%d", &a[i]);
	// Sap xep noi bot
	for(i=0;i<n;++i){
		for(j=0;j<i;++j){
			if(a[j]>a[i]) swap(&a[i], &a[j]);
		}
	}
	// Hien thi ket qua
	for(i=0;i<n;++i) printf("%d ", a[i]);	
}
