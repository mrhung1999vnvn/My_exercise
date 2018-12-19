#include<bits/stdc++.h>
using namespace std;

int main(){
	int y,x,k;
	long long a[10000];
	cin>>x>>y;
	for(long long i=2;i<=x;i++)
		a[i]=1;
	for(long long i=2;i<=x;i++)
		for(int j=2*i;j<=x;j+=i)
			a[j]=0;
	for(long long i=x-1;i>1;i--)
		if(a[i]==1){
			cout<<i; break;
		}
}
