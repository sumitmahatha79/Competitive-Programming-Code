#include<iostream>
#include<map>
typedef long long ll;
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<pair<int,int>>m;
        vector<ll>va;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            va.push_back(a);
            m.push_back({a,i+1});
        }
        sort(m.rbegin(),m.rend());
        vector<int>v;
        for(auto ele:m){
            int b = ele.second;
            v.push_back(b);
        }
        vector<ll>ans(n+1);
        ans[0] = 0;
        int k = 1;
        int l = -1;
        for(int i = 0;i<v.size();i++){
            if(i%2==0){
                ans[v[i]]=k;
                k++;
            }
            else{
                ans[v[i]] = l;
                l--;
            }
        }
        ll tim = 0;
        for(int i = 0;i<n;i++){
            tim += (2*abs(ans[i+1])*va[i]);
        }
        cout<<tim<<endl;
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;


    }
}