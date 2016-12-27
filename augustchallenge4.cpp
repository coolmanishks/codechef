#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int n,l,x,y,d=0,e=10000,c;
	cin>>n>>l;
	int a[n][3];
	for(int i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1]>>a[i][2];
	   if(i>1)
		{
		for(int j=0;j<n-1;j++)
			{
				for(int k=j+1;k<n;k++)
				{
					c=0;
					x=abs(a[j][0]-a[k][0]);
					y=abs(a[j][1]-a[k][1]);
					cout<<"x = "<<x<<"   "<<"y = "<<y<<endl;
					if(x<=l&&y<=l)
					{
						c=a[j][2]+a[k][2];
						cout<<"a["<<j<<"]["<<2<<"] = "<<a[j][2]<<"  "<<"a["<<k<<"]["<<2<<"] = "<<a[k][2]<<endl;
						cout<<"c = "<<c<<endl;
						d=max(c,d);
						e=min(c,e);
					}
					else
					break;	
				}
			}
	}
		
	}
	cout<<d<<" "<<e<<endl;
	
	for(int i=0;i<n;i++)
	{
		cout<<a[i][0]<<" "<<a[i][1]<<" "<<a[i][2]<<endl;
	}
}
