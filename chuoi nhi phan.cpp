#include<bits/stdc++.h>
using namespace std;
int k;
void nhiphan(int a[],int n,int id)
{
	if(id==n)
	{
		for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
		cout<<endl;
		return;			//tra ve tiep tuc vong lap
	}
	for(int i=0;i<2;i++) //vong lap de dien 0 1 vao arr
	{
		a[id]=i;
		cout<<i<<"\t";
		nhiphan(a,n,id+1);
	}
}
int main()
{
	int n,id;
	cin>>n;
	int a[100000];
	nhiphan(a,n,0);
}
