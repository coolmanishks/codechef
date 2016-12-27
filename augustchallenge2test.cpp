#include<iostream>
using namespace std;
int main()
{
	long int j,n,t,count,d;
	cin>>t;
	while(t--)
{
	count=0;
	cin>>n;
	long int a[n];
	for(long int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(long int i=0;i<n;i++)
	{
		d=0;
		for(long int j=i;j<2*n;j=j+a[j]+1)
		{
			d++;
			if(j<i&&(j+a[i])>i)
			break;
			else if(j>=n-1)
			{
			j=j+a[j];
			j=j-n+1;
			
		    }
     		else if(j==i)
     		{
     		if(d>1)
			 {	
			count++;
			break;
		     }
            }
		}
	}
	cout<<count<<endl;
}
}
