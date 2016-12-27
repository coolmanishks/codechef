#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s1,s2;
	int t,n,x1,x2,y1,a,y2;
	cin>>t;
	while(t--)
	{
		int minimum=100000;
		cin>>s1>>s2;
		for(int i=0;i<s1.size();i++)
		{
			x2=s1.size()-(i+1);
			for(int j=i;j<s2.size();j++)
			{
				if(s1[i]==s2[j])
				{
				y2=s2.size()-(j+1);
				a=abs(i-j)+abs(j-x2)+abs(x2-y2)+abs(y2-i);
				minimum=min(minimum,a);
			    }
			}
		}
		cout<<minimum<<endl;
	}
}
