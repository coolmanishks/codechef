#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0,c=0,d=0;
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];		
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
		
			if(a[i]>0)
			{
				c=0;
				sum=a[i]+a[j];
				for(int k=2;k<=sqrt(sum);k++)
				{
					if(sum%k==0)
					{
						c++;
					break;
				    }
				}
				if(c==0)
				{
					d++;
				}
			}
		}
	}
	
	cout<<d<<endl;
}
