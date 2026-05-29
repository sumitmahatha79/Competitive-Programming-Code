#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        ll sum = 0;
        for(int i = 0;i<n-1;i++){
            sum += abs(v[i]-v[i+1]);
        }
        ll abc = sum-abs(v[0]-v[1]);
        ll abd = sum-abs(v[n-1]-v[n-2]);
        ll ans = INT_MAX;
        for(int i = 1;i<n-2;i++){
            ll sum1 = sum - abs(v[i]-v[i-1]) - abs(v[i]-v[i+1]) + abs(v[i-1]-v[i+1]);
            ans = min({sum1,abd,abd});
        }
        cout<<ans<<endl;
    }
}