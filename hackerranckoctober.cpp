#include<bits/stdc++.h>
using namespace std;
int main(){
	int applefall,orangefall,o=0,ap=0;
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    
    vector<int> apple(m);
    for(int apple_i = 0;apple_i < m;apple_i++){
       cin >> apple[apple_i];
    }
    vector<int> orange(n);
    for(int orange_i = 0;orange_i < n;orange_i++){
       cin >> orange[orange_i];
    }
    applefall=s-a;
    orangefall=b-t;
    for(int i=0;i<m;i++)
        if(apple[i]>=applefall)
        ap++;
    for(int j=0;j<n;j++)
        if(orange[j]>=orangefall)
        o++;
        
        cout<<ap<<endl;
        cout<<o<<endl;
        
    return 0;
}

