#include<iostream>
#include<stdlib.h>
using namespace std;
int area(int x1,int y1,int x2,int y2,int x3,int y3)

{

return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));

}
int inside(int x1,int y1,int x2,int y2,int x3,int y3)

{

float A=area(x1,y1,x2,y2,x3,y3)/2.0;

float a1=area(0,0,x1,y1,x2,y2);

float a2=area(0,0,x1,y1,x3,y3);

float a3=area(0,0,x3,y3,x2,y2);

if(A==((a1+a2+a3)/2.0))

return 1;

else return 0;

}

int main()
{
	int n,count;
	cin>>n;
	long int a[n][1];
	for(int i=0;i<n;i++)
	{
	cin>>a[i][0];
	cin>>a[i][1];
	count=0;
	if(i>=2)
	{
    for(int j=0;j<=i-2;j++)
    {
    	
    	for(int k=j+1;k<=i-1;k++)
    	{
    		for(int l=k+1;l<=i;l++)
    		{
    			cout<<a[j][0]<<"   "<<a[j][1]<<"   "<<a[k][0]<<"   "<<a[k+1][1]<<"   "<<a[l][0]<<"   "<<a[l+1][1]<<endl;
    		if(inside(a[j][0],a[j][1],a[k][0],a[k][1],a[l][0],a[l][1]))
    		{
    		count++;
    	    }
			}
		}
	}
    }
    cout<<a[i][0]<<"   "<<a[i][1]<<endl;
	cout<<count<<endl;
}
}

