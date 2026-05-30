#include<iostream>
using namespace std;
void solve(){
    int n,k;
    cin>>n>>k;
    int ans = 0;
    if(n == 1){
        cout<<ans<<endl;
    }
    else if(k>=n){
        cout<<1<<endl;
    }
    else{
        if((n-1)%(k-1)==0){
        ans = (n-1)/(k-1);
        }
        else{
            ans = (n-1)/(k-1) + 1;
        }
        cout<<ans<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}