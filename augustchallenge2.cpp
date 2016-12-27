#include<iostream>
using namespace std;
int main()
{
	long long int t,n,d,k,count;
	
	cin>>t;
	while(t--)
	{
		count =0;
		cin>>n;
		long long int a[n];
		for(int i=1;i<=n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			d=0;
			for(k=1;k<=n;k++)
			{
			if(k==n)
			{
			d++;
			k=0;
		    }
			if(k==j)
			{
			count++;
			break;
		    }
		    if(d!=0)
				if(k>j)
				break;
			k=k+a[k];
			}
			
			
		}
		cout<<k<<endl;
	}
}
