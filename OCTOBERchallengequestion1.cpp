#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
 float d,f,g,sum=0;
cin>>n;
float a[n+1];
for(int i=0;i<n;i++)
{
cin>>a[i];
}
   for(int i=0;i<n;i++)
  {
     for(int j=i+1;j<n;i++)
    {
        for(int k=j+1;k<n;k++)
        {
  
           d=(a[i]+a[j]+a[k]);
		   f=(a[i]*a[j]*a[k]);
		   g=d/f;
           sum=sum+floor(g);
        }
    }
  }
cout<<sum<<endl;
return 0;
}
