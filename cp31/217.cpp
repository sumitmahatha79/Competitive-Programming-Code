#include<iostream>
using namespace std;
int main(){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int ans = 1;
        int cnt = 1;
        for(int i = 1;i<n;i++){
            if(v[i]>=v[i-1]){
                cnt++;
            }
            else{
                ans = max(cnt,ans);
                cnt = 1;
            }
        }
        ans = max(ans,cnt);
        cout<<ans<<endl;
    }
