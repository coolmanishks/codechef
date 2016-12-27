#include<iostream>
using namespace std;
int main()
{
	int t,n,k;
	cin>>t;
	while(t--)
	{
		int student=0;
		cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		for(int j=1;j<=n;j++)
		{
			int count=0;
			for(int r=0;r<n;r++)
			{
				if((a[r]==j)&&(r!=j-1))
				{
			count++;
		        }  
			if(count>=k)
			{
				student++;
				break;
			}	
			}
			
		}
		cout<<student<<endl;
	}
}
