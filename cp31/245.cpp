#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n+1,0);
    for(int i = 0;i<n;i++){
        int a;
        cin>>a;
        v[a]++;
    }
    int cnt = 0;
    
    for(int i = 0;i<=n;i++){
        if(v[i]<i){
            cnt+=v[i];
        }
        else if(v[i]>i){
            int val = v[i]-i;
            cnt+=val;
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