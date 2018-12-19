#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, dem = 1, stt = 0;
	long long a[1002], b[1002] = {};
	cin>>n;
	b[0]=-1;
	for(int i = 0; i < n; i++)
	{
		cin>>a[i];
	}
	
	for(int i = 0; i < n; i++)
	{
		for(int j=0;j<i;j++){
			if(a[i]>a[j]&&b[j]>=b[i]){
				b[i]=b[j]+1;
			}
			if(b[i]==0)
				b[i]=1;
		}
		cout<<b[i];
	}
	cout<<endl;
	int t=1;
	for(int i=0;i<n;i++){
		if(b[t]<b[i])
			t=i;
	}
	
	cout<<b[t]<<endl;
	
	for(int i = 0; i <= t; i++)
	{
		if(a[i]<a[t]&&a[i]<a[i+1])
			cout<<a[i]<<' ';
	}
	cout<<a[t];
	return 0;
}
    
