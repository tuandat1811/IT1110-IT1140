#include <stdio.h>

int main()
{
	int n, a[100],i;
	float tongSoDuong=0, soSoAm=0, tongSoAm = 0;
	// Nhap tu ban phim va dong thoi thuc hien tinh toan
	do{
	scanf("%d", &n);
	} while(n<=0||n>=100);
	for(i=0;i<n;++i){
		scanf("%d", &a[i]);
		if(a[i]>0) tongSoDuong+=a[i];
		if(a[i]<0) {soSoAm +=1; tongSoAm +=a[i];}
	}
	// In ra man hinh
	// Neu soSoAm>0 thi in ra trung binh cac so Am. Nguoc lai in ra 0
	printf("%f %f",soSoAm>0?tongSoAm/soSoAm:0, tongSoDuong);
}
