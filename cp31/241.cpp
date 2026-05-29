#include<iostream>
using namespace std;
void solve(){
    int r,x,d,n;
    cin>>r>>x>>d>>n;
    string s;
    cin>>s;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        if(s[i]=='1'){
            cnt++;
            r-=d;
        }
        else{
            if(r<x){
                cnt++;
                r-=d;
            }
        }
    }
    cout<<cnt<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}