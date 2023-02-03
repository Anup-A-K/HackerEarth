#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    if(n==1)
        cout<<"1\n";
    else if(n==2)
        cout<<"4\n";
    else if(n==3)
        cout<<"10\n";
    else if(n==4)
        cout<<"18\n";
    else{
        int res=18+(n-4)*9;
        cout<<res<<"\n";
    }
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
