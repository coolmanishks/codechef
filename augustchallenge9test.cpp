#include<iostream>
using namespace std;
int main()
{
	int n,count,i;
	cin>>n;
	long int a[n][2];
	for(i=0;i<n;i++)
	{
	cin>>a[i][0];
	cin>>a[i][1];
	
    }
    cout<<"\n";
   	for(i=0;i<n;i++)
	{
	cout<<a[i][0]<<" ";
	cout<<a[i][1]<<endl;
    }
	
}
