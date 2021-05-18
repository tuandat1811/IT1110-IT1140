/* TINH GIAI THUA
Input: so nguyen n (n<8)
Output: n! (gt)
*/
#include <stdio.h>

int main()
{
	int n, i, gt = 1;
	// kiem tra dieu kien input
	do{
		scanf("%d", &n);
	}while(n>=8);
	// Tinh giai thua
	for(i=2;i<=n;++i)
		gt *= i;
	// Hien thi ket qua
	printf("%d", gt);
}
