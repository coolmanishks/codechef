#include<iostream>
using namespace std;
int main()
{
	int t,n,sum=0,k=0;
	cin>>t;
	while(t--)
	{
		cin>>n;
		k=n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				sum++;
				k--;
				if(i==k)
				{
					return sum;
				}
			}
		}
	}
	
	
}
