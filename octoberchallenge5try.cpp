#include<iostream>
using namespace std;
int main()
{
	long long int n,m,t;
	cin>>t;
	while(t--)
    {
    	long long int prod;
    	cin>>n>>m;
    	long long int a[n+1],l[n+1],r[n+1],q[n+1],x[n+1],y[n+1],three=0,count=0;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];	
		}
	   for(int i=1;i<=m;i++)
	 {
	 	cin>>q[i];
		if(q[i]==1)
	    {    
			cin>>l[i]>>r[i]>>x[i];
		}//1LRX
		if(q[i]==2)
		{
			cin>>l[i]>>r[i]>>y[i];
		}//2LRY
		if(q[i]==3)
		{
		   cin>>l[i]>>r[i];
		   three++;
		}//3LR
	}
		for(int i=1;i<=m;i++)
	 {
	 	if(q[i]==3)
		{   
		if(three==0)
		break;
		else
			{
			prod=1;
			for(int j=l[i];j<=r[i];j++)
			{
				prod=prod*a[j];
				if(prod%10==0)
			 {
				count++;
				prod=prod/10;
			 }
			}
			three--;
		   }
		}//3LR
		if(q[i]==1)
	    {
			for(int j=l[i];j<=r[i];j++)
			{
				a[j]=a[j]*x[i];
			}
		}//1LRX
		if(q[i]==2)
		{
			long long int k=0;
			for(int j=l[i];j<=r[i];j++)
			{
				k++;
				a[j]=y[i]*k;
			}
		}//2LRY
	}//while end m queries
	cout<<count<<endl;
	}//while end test cases	
}
