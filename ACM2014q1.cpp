#include<iostream>
using namespace std;
void insertion(int a[],int n)
{
	int d;
	for(int j=1;j<=n;j++)
	{
		for(int k=0;k<n;k++)
		{
			if(k>j)
			break;
			else
			{
				if(a[k]>a[j])
				{
					d=a[j];
					a[j]=a[k];
					a[k]=d;
					for(int i=0;i<n;i++)
					cout<<a[i];
					cout<<endl;
				}
				
			}
		}
		
	}
}
int main()
{
	int n,t,a[1000];
	cin>>t;
	while (t--)
	{
		int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	insertion(a,n);
	for(int i=n-4;i<n;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum<<endl;
}
}
