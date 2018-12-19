#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,k;
	vector <int> a(1);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>k;
		a.push_back(k);
	}
	
	for(int i=1;i<a.size();i++)
	{
		cout<<a[i];
	}
}
