#include<bits/stdc++.h>
using namespace std;
int n;
int s;
int f=2;
bool a[100];
float b[100][100];
int trace[100];

void printPath(int des)
{
	cout<<des<<" <= ";
	while (trace[des]!=-1)
	{
		cout<<trace[des];
		des = trace[des];
		if (trace[des]!=-1) cout<<" <= ";
	}
	cout<<endl;
}

void dfs(int u)
{		
	//Xuat so dinh
		a[u]=true;
		if(u==f)
		{
			//cout<<u<<endl;
			//cout<<endl;
			printPath(f);
			return;
		}
		for(int j=0;j<n;j++)
		{
			if(b[u][j]!=64000&&a[j]==false)  //kiem tra phan tu chua di
			{
				//cout<<j<<"\t";
				trace[j]=u; //lay tung note, de xuat
				dfs(j);
				a[j]=false;
			}
		}
}
int main()
{
	cin>>n;
	//nhap ma tran 
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
		//	cout<<"nhap mang b["<<i<<"]["<<j<<"]";
			cin>>b[i][j];
		}
	}
	for(int i=0;i<n;i++)
	{
		a[i]=false;
	}
	//dung ham kiem tra
	trace[0]=-1;
	dfs(0);
	return 0;
}
