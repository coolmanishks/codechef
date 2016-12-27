#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,flag=1;
cin>>n;
int a[n+2];
    for(int i=0;i<n;i++)
    {
	  cin>>a[i];
	  if(i>=1)
	  {
	  	if(a[i]<a[i-1])
	  	flag=0;
	  }
     }
     if(flag)
     cout<<"Happy";
     else
     cout<<"Angry";
     return 0;
}
