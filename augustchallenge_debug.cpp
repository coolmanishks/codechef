#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

int inside(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y);

int area(int x1,int y1,int x2,int y2,int x3,int y3);

main()

{ int n,x,y,a,b,c,d;
	cin>>n;
while(n--)
{
cin>>x>>y>>a>>b>>c>>d;
if(inside(x,y,a,b,c,d,0,0))

{

printf("inside");

}

else

printf("not inside");


}
}
int inside(int x1,int y1,int x2,int y2,int x3,int y3,int x,int y)

{

float A=area(x1,y1,x2,y2,x3,y3)/2.0;
cout<<"A"<<A<<endl;
float a1=area(x,y,x1,y1,x2,y2);
cout<<"a1"<<a1<<endl;
float a2=area(x,y,x1,y1,x3,y3);
cout<<"a2"<<a2<<endl;
float a3=area(x,y,x3,y3,x2,y2);
cout<<"a3"<<a3<<endl;
if(A==((a1+a2+a3)/2.0))
{
if((a1!=0)&&(a2!=0)&&(a3!=0))
{
return 1;
}
else return 0;
}
else return 0;

}

int area(int x1,int y1,int x2,int y2,int x3,int y3)

{

return abs((x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)));

}
