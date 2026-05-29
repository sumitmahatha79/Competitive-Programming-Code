#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        sort(v.begin(),v.end());
        long long ans = INT_MIN;
        for(int i = 1;i<n;i+=2){
            long long val = v[i]-v[i-1];
            ans = max(ans,val);
        }

        cout<<ans<<endl;
    }
}