/* TINH TONG CAC CHU SO
Input: so nguyen n (0<n<1000)
Output: tong cac chu so cua n
*/
#include <stdio.h>

int main()
{
	int n, tong=0;
	// Kiem tra dieu kien input
	do{ //luon lam 1 lan, khong can biet dung hay sai, kiem tra sau
		scanf("%d", &n);
	}while(n>=1000||n<=0); //0<n<1000 ==> vong trong while phai trai voi dau bai, luon luon lam 
	// Tinh tong cac chu so cua n
	while(n>0) //==> neu sai khoi lam
	{
		tong += n%10;
		n/=10;
	}
	// Hien thi ket qua
	printf("%d", tong);
}
