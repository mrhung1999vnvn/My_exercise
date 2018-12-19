#include<iostream>
#include<cmath>

using namespace std;


void nhap(int *a,int &n);
void xuat(int *a,int n);
int bt1(int *a,int n);
int bt2(int *a,int n);
int bt3(int *a,int n);
void bt4(int *a,int n);
void bt5(int *a,int n);
void bt6(int *a,int n);
void bt7(int *a,int n);
int bt8(int *b,int n);
int bt9(int *a,int n);
void bt10(int *a,int n);
void bt11(int *a,int &n);

int main()
{
	int n;
	int *a=new int [n];
	//float *b=new float[n];
	cout<<"nhap n : ";
	cin>>n;
	nhap(a,n);
	xuat(a,n);
//	cout<<endl;
//	cout<<bt1(a,n);
//	cout<<bt2(a,n);
//	cout<<bt3(a,n);
//	bt4(a,n);
//	cout<<endl;
//	bt5(a,n);
//	cout<<endl;
//	bt6(a,n);
//	cout<<endl;
//	bt7(a,n);
//	cout<<endl;
//	cout<<bt8(a,n);	
//	cout<<endl;
//	cout<<bt9(a,n);
//	cout<<endl;
//	bt10(a,n);
	cout<<endl;
	bt11(a,n);
	delete []a;
	//delete []b;
}
void nhap(int *a,int &n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap gia tri cua a["<<i<<"]";
		cin>>a[i];
	}
}
void xuat(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int kt(int n)
{
	int d=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			d++;
		}
	}
	if(d==2)
	{
		return 1;
	}
	return 0;
}
int bt1(int *a,int n)
{
	int i;
	for( i=0;i<n;i++)
	{
		if(kt(a[i])==1)
		{
			return a[i];
		}
	}
	return -1;
}
int bt2(int *a,int n)
{
	int c;
	for(int i=0;i<n;i++)
	{
		if(kt(a[i])==1)
		{
			c=a[i];
		}
	}
	return c;
}
int bt3(int *a,int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(kt(a[i])==1)
		{
			if(max<a[i])
			{
				max=a[i];
			}
		}
	}
	if(max!=0)
	{
		return max;
	}
	return 0;
}
void bt4(int *a,int n)
{
	int x;
	int d;
	int max=0;
	int c;
	cout<<"nhap gia tri cua x";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		d=abs(x-a[i]);
		if(max<d)
		{
			max=d;
			c=a[i];
		}
	}
	cout<<"vi tri xa nhat la : "<<c;
}
void bt5(int *a,int n)
{
	int s;
	int min=0;
	int x,c;
	cout<<"nhap gia tri x : ";
	cin>>x;
	for(int i=0;i<n;i++)
	{
		s=abs(x-a[i]);
		if(min==0||min>s)
		{
			min=s;
			c=a[i];
		}
	}
	cout<<"vi tri gan nhat la : "<<c;
}
void bt6(int *a,int n)
{
	int max=0;
	int min=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(min==0||min>a[i])
		{
			min=a[i];
		}
	}
	cout<<"mang mot chieu nam trong khoang a["<<min<<", "<<max<<"]";
}
void bt7(int *a,int n)
{
	int max=0;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	cout<<"gia tri x can tim la : "<<max<<endl;
	cout<<"nam trong khoang a["<<-max<<", "<<max<<"]";
}
int bt8(int *b,int n)
{
	for(int i=0;i<n;i++)
	{
		if(b[i]>2003)
		{
			return b[i]; 
		}
	}
	return 0;
}
int bt9(int *a,int n)
{
	int amCuoiCung=0;
	for(int i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			amCuoiCung=a[i];
		}
	}
	return amCuoiCung;
	if(amCuoiCung==0)
	{
		return 0;
	}
}
void bt10(int *a,int n)
{
	int max=0;
	int min=0;
	int min_2=0;
	int s;
	int c;
	for(int i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(min==0||min>a[i])
		{
			min=a[i];
		}
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]!=min)			//không bi trung voi min
		{
			s=abs(min-a[i]);			//lay tung khoang cach
			if(min_2==0||min_2>s)		//lay khoang cach nho nhat 
			{
				min_2=s;
				c=a[i];
			}
		}
	}
	cout<<"gia tri la  : "<<c;
}
void bt11(int *a,int &n)
{
	int k;
	cout<<"nhap chi so k : ";
	cin>>k;
	for(int i=k;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	xuat(a,n);
}
