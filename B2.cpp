#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
	
	ll n,s=0,d=0,max=0;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
		s=s+a[i];
	}
	for(int i=0;i<n;i++){
		if(max<a[i])
			max=a[i];
	}
	ll res[max];
	for(int i=0;i<n;i++){
		res[i]=false;
	}
	for(ll i=0;i<n;i++){
		if(!res[a[i]]){
			res[a[i]]=true;
		}
		else{
			res[a[i]]=false;
		}
	}
	for(int i=0;i<n;i++){
		if(!res[i]){
			cout<<a[i];
		}
	}
	
}
