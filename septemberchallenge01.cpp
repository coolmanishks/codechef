#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
	string a;
	int t,zero,one;
    cin>>t;
    while(t--)
    {
    	zero=0,one=0;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
    	if(a[i]=='1')
         one++;
    	else
    	 zero++;
	}
	if(one==1)
	cout<<"Yes"<<endl;
	else if(zero==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
   }
}
