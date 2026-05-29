#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,c,k;
        cin>>n>>c>>k;
        vector<long long >v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        long long ans = c;
        for(int i = 0;i<n;i++){
            if(ans>=v[i]){
                long long val = ans-v[i];
                if(val>k){
                    ans+=(v[i]+k);
                    k = 0;
                }
                else{
                    ans+=(v[i]+val);
                    k-=val;
                }
            }
        }
        cout<<ans<<endl;
    }
}