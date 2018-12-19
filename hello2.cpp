#include<iostream>
using namespace std;

int main(){
	int n,s=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		int t=1;
		for(int j=i;j<=2*n;j++){
			t*=j;
		}
		s+=t;
		//cout<<s;
	}
	cout<<s;
}
