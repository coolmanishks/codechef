#include<iostream>
using namespace std;
int main()
{
	long int t,n,m;
	 cin>>t;
	 while(t--)
	 {
	 	long int r=0;
	 	cin>>n>>m;
	 	r=n*m-1;
	 	if(r%2==0)
	 	cout<<"NO"<<endl;
	 	else
	 	cout<<"YES"<<endl;
	 }
	 return 0;
}
