#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int t,d,n,p;
	cin>>t;
	while(t--)
	{ d=0,p=0;
	cin>>a;
	n=a.length();
	    for(int i=0;i<=(a.length()/2);i++)
	    {
		n--;
		if((a[i]=='.')&&(a[n]!='.'))
		{
		a[i]=a[n];	
		}
		else if((a[n]=='.')&&(a[i]!='.'))
		a[n]=a[i];
		else if((a[n]=='.')&&(a[i]=='.'))
		a[n]=a[i]='a';
		else if(a[n]!=a[i])
		  {
		  	d=-1;
		  	break;
		  }
		}
		if(d==-1)
	cout<<d<<endl;
	else
	{
		cout<<a<<endl;
	}		
	}
}
	
