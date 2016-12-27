#include<iostream>
using namespace std;
int main()
{
string s;
int t;
	
	cin>>t;
	while(t--)
	{
		cin>>s;
	 int count=0;
		if(s[0]!='*')
		{
		cout<<"N0"<<endl;
	    }
		else
	   {
	     for(int i=1;i<s.length();i++)
	     {
	     	if(s[i]==0)
	     	{
	     		count++;
			 }
			 if(count>2)
			 {
			 	cout<<"NO"<<endl;
			 	break;
			 }
			 if(s[i]=='*')
			 {
			 	count=0;
			 }
			 if(i==s.length()-1)
			 cout<<"Yes"<<endl;
	  
	     }
	 }
}
}
