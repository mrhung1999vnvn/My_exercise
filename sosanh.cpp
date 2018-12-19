#include<bits/stdc++.h>
using namespace std;

int main(){
	long long a,b,c,d;
	long long n;
	cin>>n;
	for(long long i=0;i<n;i++){
		cin>>a>>b>>c>>d;
		int s=pow(a,b);
		int s2=pow(c,d);
		if(pow(a,b)<pow(c,d)){
			cout<<"<"<<endl;
			cout<<s<<" "<<s2;
		}
		else if(pow(a,b)>pow(c,d)){
			cout<<">"<<endl;
			cout<<s<<" "<<s2;
		}
		else if(pow(a,b)==pow(c,d))
			cout<<"="<<endl;
			cout<<s<<" "<<s2;
	}
}
