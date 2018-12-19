#include<bits/stdc++.h>
using namespace std;

int nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int timkiem_nhiphan(int a[],int n,int x,int l,int r)
{
	l=0;
	r=n;
	while(l<=r)
	{
		int mid=(l+r)/2;
		if(a[mid]==x)
		{
			return mid;
		}
		else if(x>a[mid])
		{
			l=mid+1;
		}
		else if(x<a[mid])
		{
			r=mid-1;
		}
	}
	return 0;
}
int main()
{
	int n;
	int x;
	int l,r;
	cin>>n;
	int a[n];
	nhap(a,n);
	sort(a,a+n);
	cin>>x;
	cout<<timkiem_nhiphan(a,n,x,l,r);
}
