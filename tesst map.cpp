#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a[10],d=0;
	map<char,int>m;
	for(int i=0;i<10;i++){
		int s=0;
		cin>>a[i];
		s=a[i]%42;
		m[s]=s;
	}
	for(map<char,int>::iterator i=m.begin();i!=m.end();i++){
		d++;
	}
	cout<<d;
}
