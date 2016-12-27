#include<bits/stdc++.h>
using namespace std;
int check(int a[],int prod,int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]==prod)
		return 1;
	}
	return 0;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,prod,f=0;
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++)
		{
			for(int j=i;j<n;j++)
			{
				prod=a[i]*a[j];
				f=check(a,prod,n);
			}
		}
		if(f==1)
		cout<<"yes"<<endl;
		else
		cout<<"no"<<endl;
	}
}
