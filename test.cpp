#include<bits/stdc++.h>
using namespace std;

int a[100][100];
bool vis[100];
int sav[100];
int n;
void xuat(int index)
{
	cout<<index<<"<=";
	while(sav[index]!=-1)
	{
		cout<<sav[index];
		index=sav[index];
		if(sav[index]!=-1)
		{
			cout<<"<=";
		}
	}
}
void dfs(int id)
{
	vis[id]=true;
	if(id==2)
	{
		xuat(2);
		cout<<endl;
		return;
	}
	for(int i=0;i<n;i++)
	{
		if(a[id][i]!=64000&&vis[i]==false)
		{
			sav[i]=id;
			dfs(i);
			vis[i]=false;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	sav[0]=-1;
	dfs(0);
	return 0;
}
