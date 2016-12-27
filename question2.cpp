#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int t,sum=0;
	cin>>t;
	while(t--)
	{
	cin>>s;
	for(int i=0;i<s.size();i++)
	{
		if(isdigit(s[i]))
		sum+=s[i]-'0';
	}
	cout<<sum<<endl;
    }
}
