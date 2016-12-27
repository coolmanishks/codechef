#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int t,d,n;
	cin>>t;
	while(t--)
	{ d=0;
	cin>>a;
	n=a.length();
	if(n%2==0)
	  {
	    for(int i=0;i<(a.length()/2);i++)
	    {
		n--;
		if((a[i]=='.')&&(a[n]!='.'))
		{
		a[i]=a[n];	
		}
		else if((a[n]=='.')&&(a[i]!='.'))
		a[n]=a[i];
		else if((a[n]=='.')&&(a[i]=='.'))
		{
		a[n]='a';
		a[i]='a';
		}
		if(a[i]!=a[n])
		d=-1;	
	  }
}
	else
	{
		if(a[(n-1)/2+1]=='.')
		{
	     
	      a[(n-1)/2+1]='a';
	     
		}
	
		       for(int i=0;i<(a.length()-1)/2;i++)	
	       	{
	        n--;
	        if(a[i]=='a')
	        
		    if((a[i]=='.')&&(a[n]!='.'))
	     	{
	     	a[i]=a[n];	
	    	}
	     	else if((a[n]=='.')&&(a[i]!='.'))
	     	a[n]=a[i];
	    	else if((a[n]=='.')&&(a[i]=='.'))
	     	{
		a[n]='a';
		a[i]='a';
		}	
		if(a[i]!=a[n])
		d=-1;
	    	}	
	
		
		
	}
	if(d==-1)
	cout<<d<<endl;
	else
	{
		for(int i=0;i<a.length();i++)
		{
			cout<<a[i];
		}
		cout<<endl;
	}
}

}
