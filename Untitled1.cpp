#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,temp;
    int k;
    int q;
    cin >> n >> k >> q;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    for(int i=0;i<k;i++)
        {
        temp=a[n-1];
        for(int j=n-1;j<n;j--)
       { 
        a[j]=a[j-1];
       }
        a[0]=temp;
    }
    for(int i = 0; i < q; i++){
        int m;
        cin >> m;
        cout<<a[m]<<endl;       
     }
    return 0;
}

