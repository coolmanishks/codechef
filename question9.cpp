#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int t,sum=0,sa;
	cin>>t;
	while(t--)
	{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if ((s[i] >= '0') && (s[i] <= '9'))
		{
		
		sum+=s[i]-'0';
	}
	}
	cout<<sum<<endl;
    }
}
