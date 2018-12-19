#include<iostream>
using namespace std;

int fibo(int n){
	if(n==1||n==2)
		return 1;
	else{
		return fibo(n-1)+fibo(n-2);
	}
}
int fibo2(int n){
	int value=0,value1=1,s=0;
	for(int i=2;i<=n;i++){
		s=value+value1;
		value=value1;
		value1=s;
	}
	return s;
}
int d=0;
int dem1(int n){
	if(n<=0){
		return d;
	}
	else{
		if((n%10)%3==0){
			d++;
		}
		return dem1(n/10);
		
	}
}
int main(){
	int n;
	cin>>n;
	cout<<dem1(n);
	
//	cout<<fibo2(n);
}
