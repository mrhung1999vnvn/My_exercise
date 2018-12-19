#include<bits/stdc++.h>
using namespace std;

int n,m,d=0,s1,s2,f;
string a[10000],b[10000];
int x[4]={-1,0,1,0};
int y[4]={0,1,0,-1};
int nx=0;int ny=0;
int c=0;
void xuly(int dx,int dy){
	if(c!=1){
		
	}
	b[dx][dy]=true;
	for(int i=0;i<4;i++){
		nx=dx+x[i];
		ny=dy+y[i];
		if(a[nx][ny]=='.'&&b[nx][ny]==false){
		
			if(a[nx][ny]=='F'){
				c=1;
				xuly(nx,ny);
			}
			else xuly(nx,ny);
		}	
	}
	cout<<c;
} 
int main(){
	
	cin>>n>>m;
//	while(d<2){
//		d++;
		for(int i=0;i<=n+1;i++){
			for(int j=0;j<=m+1;j++){
				a[i][j]='#';
			}
		}
		for(int i=1;i<=n;i++){
			for(int j=1;j<=m;j++){
				cin>>a[i][j];
				if(a[i][j]=='S'){
					s1=i;
					s2=j;
				}
			}
		}
//		for(int i=0;i<=n+1;i++){
//			for(int j=0;j<=m+1;j++)
//				cout<<a[i][j];
//			cout<<endl;
//		}
		xuly(s1,s2);
//	}
}
