#include<iostream>
using namespace std;
int main()
{
	char a[10000];
	int n,b;
	cin>>n;
	while(n--)
	{
		cin>>b;
		for(int i=0;i<b;i++)
	    cin>>a[i];
	    int m=0;
	for(int i=0,j=b-1;i<b/2;i++,j--)
	{
		if(a[i]==a[j])
		continue;
		else
		m++;
		
	}
	cout<<m<<endl;

	}	
return 0;
}

