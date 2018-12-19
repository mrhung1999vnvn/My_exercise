#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000][1000];
void bt()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
			a[i][j]+=max(a[i-1][j],a[i][j-1]);
		}
	}
	cout<<a[n][m];
}
int main()
{
	ios::sync_with_stdio(0), cin.tie(0);
	cin>>n>>m;
	bt();
}
