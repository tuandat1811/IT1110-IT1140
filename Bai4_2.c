#include <stdio.h>
#include <math.h>
int main()
{
	int n, i;
	int isNguyenTo = 1;
	scanf("%d", &n);
	for(i=2;i<=sqrt(n);++i){
		if(n%i==0){
			// Ton tai i<n, i!=1 ma n%i==0
			// Nen n khong phai so nguyen to. Thoat khoi vong lap.
			isNguyenTo = 0;
			break;
		}
	}
	// Neu n>1 va bien isNguyenTo=1 thi n la so nguyen to
	// Nguoc lai thi n khong phai so nguyen to
	printf("%s", ((isNguyenTo && n > 1)?"La so nguyen to":"Khong phai so nguyen to"));
}
