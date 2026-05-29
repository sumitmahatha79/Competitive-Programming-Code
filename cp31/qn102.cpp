#include<iostream>
#include<map>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        vector<ll>u(n);
        for(int i = 0;i<n;i++){
            cin>>u[i];
        }
        map<ll,ll>m1;
        ll cnt = 1;
        for(int i = 1;i<n;i++){
            if(v[i]==v[i-1]){
                cnt++;
            }
            else{
                m1[v[i-1]] = max(cnt,m1[v[i-1]]);
                cnt = 1;
            }
        }
        m1[v[n-1]] = max(cnt,m1[v[n-1]]);
        map<ll,ll>m2;
        ll cnt1 = 1;
        for(int i = 1;i<n;i++){
            if(u[i]==u[i-1]){
                cnt1++;
            }
            else{
            m2[u[i-1]] = max(cnt1,m2[u[i-1]]);
            cnt1 = 1;
            }
        }
        m2[u[n-1]] = max(cnt1,m2[u[n-1]]);
        ll maxi2 = 1;
        for(auto ele : m1){
            ll fe = ele.second;
            maxi2 = max(maxi2,fe);
            if(m2.find(ele.first) != m2.end()){
                ll se = m2[ele.first];
                maxi2 = max(maxi2,(se+fe));
            }
        }
        for(auto ele : m2){
            ll ge = ele.second;
            maxi2 = max(maxi2,ge);
        }
        cout<<maxi2<<endl;
    }

}