#include<iostream>
using namespace std;
typedef long long ll;
ll func(ll n){
    ll sum = (n*(n+1))/2;
    return sum;
}
int main(){
    ll t;
    cin>>t;
    for(ll i = 1;i<=t;i++){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>v(n,0);
        for(ll i = 0;i<n;i++){
            ll va;
            cin>>va;
            if(va<=q){
                v[i]=1;
            }
        }
        ll sum = 0;
        vector<ll>u;
        for(ll i = 0;i<n;i++){
            sum+=v[i];
            if(v[i]==0){
                u.push_back(sum);
                sum = 0;
            }
        }
        u.push_back(sum);

        ll way = 0;
        for(ll i = 0;i<u.size();i++){
            if(u[i]>=k){
                way += func(u[i]-k+1);
            }
        }
        cout<<way<<endl;
    }
}