#include<iostream>
using namespace std;
int main()
{
	int l,r,x,y,n,m,q,t;
	cin>>t;
	while(t--)
    {
    	long long int prod;
    	cin>>n>>m;
    	int a[n+1],count=0;
    	for(int i=1;i<=n;i++)
    	{
    		cin>>a[i];	
		}
		while(m--)
	 {
	 	cin>>q;
		if(q==1)
	    {
			cin>>l>>r>>x;
			for(int j=l;j<=r;j++)
			{
				a[j]=a[j]*x;
			}
		}//1LR
		if(q==2)
		{
			cin>>l>>r>>y;
			for(int j=l,i=1 ;j<=r;j++,i++)
			{
				a[j]=y*i;
			}
		}
		if(q==3)
		{
			prod=1;
			cin>>l>>r;
			for(int j=l;j<=r;j++)
			{
				prod=prod*a[j];
				if(prod%10==0)
			 {
				count++;
				prod=prod/10;
			 }
			
		   }
		}//3LR
	}//while end m queries
	cout<<count<<endl;
	}//while end test cases	
}
