#include <stdio.h>
#include <string.h>
#define MAX 101
void ChuanHoa(char inputString[], char sv[])
{
	// Chuan hoa ten sinh vien
	int i,j,len,t,k=0;
	// xau ket qua
	char outputString[MAX];
	len = strlen(inputString); i=0; j=len-1;
	// i (j) la vi tri dau tien (cuoi cung) ma inputString khac khoang trang
	while(inputString[i]==' ') i++;
	while(inputString[j]==' ') j--;
	// Vi tri khac khoang trang dau tien cua inputString la ky tu hoa
	outputString[k++] = toupper(inputString[i]);
	// Chuan hoa tu vi tri khac khoang trang thu 2
	for(t=i+1;t<=j;++t){
		if(inputString[t] ==' ' && inputString[t-1] != ' ')
			outputString[k++] = inputString[t];
		if(inputString[t] !=' ' && inputString[t-1] == ' ')
			outputString[k++] = toupper(inputString[t]);
		if(inputString[t] !=' ' && inputString[t-1] != ' ')
			outputString[k++] = tolower(inputString[t]);
	}
	// Them ky tu ket thuc xau
	outputString[k] = '\0';
	// Copy ket qua vao sv
	strcpy(sv, outputString);
}

void SapXep(char sv[MAX][MAX], int n)
{
	// Sap xep danh sach sinh vien theo tu dien
	int i,j;
	char temp[MAX];
	for(i=0;i<n;++i){
		for(j=0;j<i;++j){
			if(strcmp(sv[i], sv[j]) < 0){
				strcpy(temp, sv[i]);
				strcpy(sv[i], sv[j]);
				strcpy(sv[j], temp);
			}
		}
	}
}
int main()
{
	int n,i;
	// sv: danh sach sinh vien da chuan hoa
	// inputString: bien chua xau nhap vao
	char sv[MAX][MAX], inputString[MAX];
	// Nhap n (dang char*) va chuyen doi n sang so
	n = atoi(gets(inputString));
	// Nhap xau tu ban phim va chuan hoa
	for(i=0;i<n;++i){
		gets(inputString);
		ChuanHoa(inputString, sv[i]);
	}
	// Sap xep
	SapXep(sv, n);
	// Hien thi ket qua
	for(i=0;i<n;++i){
		printf("(%d)%s\n", i+1, sv[i]);
	}
}
