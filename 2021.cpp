#include <bits/stdc++.h>
using namespace std;
struct SV
{
    char maSV[9], tenSV[25];
    int nam;
	float diemtb;
};
void nhap (SV &s)
{
    cin.ignore (1);
    cout<<"\n Ma sinh vien: "; gets(s.maSV);
    cout<<"Ten sinh vien: "; gets(s.tenSV);
    cout<<"Nam sinh: "; cin>>s.nam;
    cout<<"Diem trung binh: "; cin>>s.diemtb;
}
void xuat (SV &s)
{
    cout<<"\n Ma sinh vien: "<<s.maSV;
    cout<<"\n Ten sinh vien: "<<s.tenSV;
    cout<<"\n Nam sinh: "<<s.nam;
    cout<<"\n Diem trung binh: "<<s.diemtb;
}
void nhap(SV s[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<"\n SV["<<i+1<<"]";
        nhap(s[i]);
    }
};
SV max(SV s[], int n)
{
    SV max1=s[0];
    for (int i=1; i<n; i++)
        if(s[i].diemtb>=max1.diemtb) max1=s[i];
    return max1;
}
int main ()
{
    SV svien[50];
    int k;
    cout<<"\n So sinh vien:";cin>>k;
    cout<<"\n\n Nhap cac sinh vien: ";
    nhap(svien, k);
    cout<<"\n Sinh vien co diem trung binh cao nhat:";
    SV sl=max(svien, k);
    xuat(sl);
    return 0;

}
