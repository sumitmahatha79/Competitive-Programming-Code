#include<iostream>
using namespace std;
void solve(){
    int l,r;
    cin>>l>>r;
    int ans = -1;
    int an = INT_MIN;
    for(int i = l;i<=min(r,l+100);i++){
        int val = i; 
        int mini = INT_MAX;
        int maxi = INT_MIN;
        while(val>0){
            int a = val%10;
            mini = min(a,mini);
            maxi = max(a,maxi);
            val/=10;
        }
        int cal = maxi - mini;
        an = max(cal,an);
        if(an == cal){
            ans = i;
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}