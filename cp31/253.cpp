#include<iostream>
#include<set>
using namespace std;
void solve(){
    int n,q;
    cin>>n>>q;
    vector<long long>v(n);
    vector<pair<long long,long long>>u(q);
    for(int i = 0;i<n;i++)cin>>v[i];

    for(int i = 0;i<q;i++){
        long long a;
        cin>>a;
        u[i].first = a;
        u[i].second = i;
    }
    sort(u.begin(),u.end());

    vector<long long>pre(n);
    pre[0] = v[0];
    for(int i = 1;i<n;i++){
        pre[i] = pre[i-1]+v[i];
    }

    vector<long long>ans(q);

    int k = 0;
    for(int i = 0;i<q;i++){

        for(int j = k;j<n;j++){
        if(u[i].first<v[k]){
            if(k == 0){
                ans[k]=0;
            }
            else{
            ans[u[i].second]=(pre[k-1]);
            }
            break;
        }
        else{
            if(k == (n-1)){
                ans[u[i].second]=(pre[k]);
            }
            else{
            k++;
            }
        }
    }
    }
    for(int i = 0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}