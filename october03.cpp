#include<iostream>
using namespace std;
int check(int a,int b)
{
  int rem=0;
  while(a)
    {
      rem=a%b;
      a=a/b;}
  if(rem==1)
    return 1;
  else
    return 0;
}
 
int main()
{
  int t,total,n;
  cin>>t;
  while(t--)
    {
      total=1;
      cin>>n;
      if(n==1)
      {
      	cout<<"INFINITY"<<endl;
	  }
	  else if(n==0)
	    cout<<"0"<<endl;
	    else
	  {
      for(int i=3;i<n;i++)
	{
	  total=total+check(n,i);
 
	}
      cout<<total+1<<endl;
    }
}
  
 
  
}
