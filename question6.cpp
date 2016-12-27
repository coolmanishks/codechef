#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,d=0,r=0,j;
	cin>>n>>m;
	long long int a[n+1],b[m+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(int i=0;i<n;i++)
	{
		d=0;
		for(j=0;j<m;j++)
		{
			
			if(a[b[j]]==1)
			{
		     d++;
			}
		
			if(a[b[j]]==0)
			break;

			if(d==m)
			{
				r++;
			}
			if(b[j]==n-1)
			b[j]=0;
			else
			b[j]=b[j]+1;
		
		}
	}
	cout<<r<<endl;
	
}
