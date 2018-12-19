#include<iostream>
#include<cmath>
using namespace std;

int main(){
	long long n, x,k;
	cin>>n;
	x=(long long)sqrt(2*n);
	k=(long long)(x*(x+1))/2;
	if(k==n){
		cout<<"YES";
	}
	else cout<<"NO";
}
