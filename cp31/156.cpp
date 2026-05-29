#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        vector<long long>u(n);
        for(int i = 0;i<n;i++) cin>>u[i];

        sort(v.begin(),v.end());
        int l = 1;
        long long ans = 0;
        while(v.size()!=0){
            if(v.size()<u[l-1]){
                break;
            }
            long long val = l*v[v.size()-u[l-1]];
            for(int i = 1;i<=u[l-1];i++){
                if(v.size()==0){
                    break;
                }
                v.pop_back();
            }
            ans = max(ans,val);
            l++;
        }
        cout<<ans<<endl;
    }
}