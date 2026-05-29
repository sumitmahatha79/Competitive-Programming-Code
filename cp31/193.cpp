#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];

        vector<int>pre(n+1,0);
        for(int i = 1;i<=n;i++){
            pre[i] = pre[i-1]+v[i-1];
        }
        vector<int>sup(n+1,0);
            sup[n] = v[n-1];
        for(int i = n-1;i>0;i--){
            sup[i] = sup[i+1] + v[i-1];
        }

        int k = 1;
        int j = n;
        int ans = 0;
        while(k<j){
            if(pre[k]>sup[j]){
                j--;
            }
            else if(pre[k]<sup[j]){
                k++;
            }
            else{
                int cnt = k+(n-j+1);
                ans = max(ans,cnt);
                j--;
                k++;
            }
        }
        cout<<ans<<endl;
    }
}