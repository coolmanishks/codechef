#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	int c,fale=0;
	if(a>b)
	c=b;
	else if(b>a)
	c=a;
	else
	return fale;
		for(int i=c;i>1;i--)
		{
			if(a%c==0 && b%c==0)
			{
				fale=1;
				return fale;
			}
	}
	return fale;
}
int main()
{
	int t,n,total,r=0,k;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int a[n+1];
		for(int i=0;i<n;i++)
		{
			cin>>a[i];
		}
		
		for(int i=0;i<n;i++)
		{
			total=0;
			for(int j=i+1;j<n;j++)
			{
				total=total+gcd(a[i],a[j]);
				if(gcd(a[i],a[j])==1)
				{
				  i=j;
				}
			}
			if(r<=total)
			r=total;
		}
		cout<<r<<endl;
	}
}
