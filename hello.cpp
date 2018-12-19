#include<iostream>
#include<math.h>
using namespace std;

void nhap(int a[],int &n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void xuat(float a[],int &n)
{
	for(int i=n-1;i>=0;i--)
	{
		cout<<a[i];
	}
}
int lietke (int a[],int n)
{
	cout<<"so chan la: "<<endl;
	for(int i=0;i<n;i++){
		if(a[i]%2==0)
		{
			cout<<a[i]<<" ";
		}
	}
}
int max(int a[],int n)
{
	int ln=a[0]; /// gan no vao ln
	for(int i=0;i<n;++i)
	{
		if(a[i]>ln)
		{
			ln=a[i];
		}
	}
	return ln;
}
int kt(int n){
	int d=0;
	for(int i=2;i<n;i++){
		if(n%i==0){
			d++;
		}
	}
	if(n==2){
		return 1;
	}
	else if(d==0){
		return 1;
	}
	else {
		return 0;
	}
}
int kt2(int n){
	for(int i=2;i<sqrt(n);i++){
		if(n%i==0) return 0;
		else return 1; 
	}
}
int ktng(int a[],int n){
	for(int i=0;i<n;i++){
		if(kt(a[i])==1&&a[i]>1){
			cout<<a[i];
		}
	}
}


int kiemtraCP(int n,int a[])
{
	for(int i=0; i<n;i++)
	{
		if(a[i]!=0)
		{
			if((float)sqrt(a[i])==(int) sqrt(a[i]))
			{	
				cout<<a[i]<<" ";	
			}
			else {
				cout<<"Khong phai"<<i<<endl;
			}
		}
	}
	
}

//int main()
//{
//	int n;
//	cout<<" N= ";
//	cin>>n;
//	kiemtraCP(n);
//	return 0;
//	
//}
int main()
{
	int a[100];
	float b[10];
	int n;
	cout<<"nhap so luong phan tu :";
	cin>>n;
	nhap(a,n);
	kiemtraCP(n,a);
//	ktng(a,n);
//	lietke(a,n);
//	xuat(a,n);
//	max(a,n);
return 0;
}
