#include<bits/stdc++.h>
using namespace std;
int check(int a[],int b,int n)
{
	int d[n+2],c=0,f=0;
	for(int i=0,j=0;i<n;i++)
	{
	if(b%a[i]==0)
	{
	d[j++]=a[i];
	c=j; 
	}
    }
    for(int i=0;i<c;i++)
    {
    	for(int j=i+1;j<c;j++)
    	{
    		if(b%(d[i]*d[j])==0)
    		f++;
		}
	}
    
	return f;
}
int main()
{
	int n,q,sum=0;
cin>>n;
int a[n+2];
for(int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
cin>>q;
int k[q+2];
for(int i=0;i<q;i++)
{
	 scanf("%d",&k[i]);
	sum=(check(a,k[i],n))%1000000007;
	printf("%d\n",sum);
}
return 0;
}
