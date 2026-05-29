#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            v[i] = a;
        }
        sort(v.begin(),v.end());

        int maxi = 0;
        int ans = 0;
        for(int i = 1;i<n;i++){
            if(v[i]-v[i-1]<=k){
                ans++;
                maxi = max(ans,maxi);
            }
            else{
                ans=0;
            }

        }
        cout<<n-maxi-1<<endl;
    }
}