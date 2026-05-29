#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n;
        cin>>n;
        vector<pair<ll,ll>>p(n);
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
            p[i] = {v[i],i};
        }
        sort(p.begin(),p.end());
        sort(v.begin(),v.end());
        vector<ll>pe(n);
        pe[0] = v[0];
        for(int i = 1;i<n;i++){
            pe[i] = v[i]+pe[i-1];
        }
        vector<int>ans(n);
        ans[n-1] = n-1;
        for(int i = n-2;i>=0;i--){
            if(pe[i]>=v[i+1]){
                ans[i] = ans[i+1];
            }
            else{
                ans[i] = i;
            }
        }
        for(int i = 0;i<n;i++){
            p[i].first = p[i].second;
            p[i].second = ans[i];
        }
        sort(p.begin(),p.end());
        for(int i = 0;i<n;i++){
            cout<<p[i].second<<" ";
        }
        cout<<endl;

    }
}