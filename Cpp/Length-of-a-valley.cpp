#include <iostream>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int suff[n];
    suff[n-1]=1;
    for(int i=n-2;i>=0;i--){
        if(a[i]<a[i+1])
            suff[i]=1+suff[i+1];
        else
            suff[i]=1;
    }
    int pre[n];
    pre[0]=1;
    for(int i=1;i<n;i++){
        if(a[i]<a[i-1])
            pre[i]=pre[i-1]+1;
        else
            pre[i]=1;
    }
    for(int i=0;i<n;i++){
        if(pre[i]!=0 && suff[i]!=0)
            cout<<pre[i]+suff[i]-1<<" ";
        else
            cout<<pre[i]+suff[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--)
        solve();
}
