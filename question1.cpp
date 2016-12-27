#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,e=0,o=0; 
	cin>>n;
	int a[n+2];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]%2==0)
		e++;
		else
		o++;
	}
	if(e<=o)
	cout<<"NOT READY"<<endl;
	else
	cout<<"READY FOR BATTLE"<<endl;
	return 0;
}
