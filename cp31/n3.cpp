#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<long long>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    if(n%2 != 0){
        int c = v[n/2];
        int lo = 0;
        int up = 0;
        for(int i = 0;i<n;i++){
            if(c>v[i]){
                lo++;
            }
            else if(c<v[i]){
                up++;
            }
        }
        int ans = min(lo,up) + (max(lo,up)-min(lo,up));
        cout<<ans<<endl;
    }
    else{
        int m = v[n/2 - 1];
        int o = v[n/2];
        int up = 0;
        int lo = 0;
        for(int i = 0;i<n;i++){
            if(v[i]>m){
                up++;
            }
            else if(v[i]<m){
                lo++;
            }
        }
        int ans = min(up,lo) + (max(up,lo) - min(up,lo));
        up = 0;
        lo = 0;
        for(int i = 0;i<n;i++){
            if(v[i]>o){
                up++;
            }
            else if(v[i]<o){
                lo++;
            }
        }
        int ans1 = min(up,lo) + (max(up,lo) - min(up,lo));
        ans = min(ans1,ans);
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