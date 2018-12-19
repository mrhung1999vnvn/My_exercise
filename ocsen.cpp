 #include<bits/stdc++.h>
 using namespace std;
 int a[102][102];
 int m,n;
 int d=0;
 int dx[4]={-1,0,1,0};
 int dy[4]={0,1,0,-1}; 
 void ocsen(int y,int x)
 {
 	//khoi tao ban dau la true 
 	a[y][x]=0;
 	d++;
 	for(int i=0;i<4;i++)
 	{
 			int nx=dx[i]+x; 
			int ny=dy[i]+y;
			//Khi gap da se de qui
			if(a[ny][nx]==1)
			{
				ocsen(ny,nx);	
			}	
	}
 }
 int main()
 {
 	int y,x;
 	cin>>n>>m>>y>>x;
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<m;j++)
		{
			cin>>a[i][j];
			a[i][j]=!a[i][j];
		}
	}
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
//	ocsen(y,x);
//	cout<<d;
	return 0;
 }
