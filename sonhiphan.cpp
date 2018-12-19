#include<bits/stdc++.h>
using namespace std;

int n;
int k;
int arr[10000];
void bt1(int id)
{
	if(id==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<arr[i];
		}
		cout<<endl;
		return;
	}
	for(int i=6;i<=8;i=i+2)
	{
		arr[id]=i;
		bt1(id+1);
	}
}
int main()
{
	cin>>n;
	bt1(0);
}
