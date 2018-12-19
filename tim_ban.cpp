#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,l,a[100],d=0;	map<int, int>m;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>a[i];
		m[a[i]]++;
	}
	for(map<int,int>::iterator i=m.begin();i!=m.end();i++){
		if(m[l-i->first]!=0){
			d=d+i->second;
		}	
	}
	cout<<d;
//	for(int i=0,j=1;i<n-1;i++,j++){
//		if(a[i]+a[j]==m){
//			d+=2;
//		}
//	}

//	for(int i=)
}
