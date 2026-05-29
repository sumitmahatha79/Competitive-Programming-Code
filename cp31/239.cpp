#include<iostream>
typedef long long ll;
using namespace std;
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
        vector<ll>ans(n,0);
        for(int i = 0;i<n;i++){
            int cnt = 0;
            int bnt = 0;
            for(int j = i+1;j<n;j++){
                if(v[i]>v[j]){
                    cnt++;
                }
                else if(v[j]>v[i]){
                    bnt++;
                }
            }
            ans[i] = max(bnt,cnt);
        }
        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}