#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        vector<long long>b(n);
        for(int i = 0;i<n;i++)cin>>b[i];
        sort(b.rbegin(),b.rend());

        long long ans = 1;
        for(int i = 0;i<n;i++){
            long long up = upper_bound(a.begin(),a.end(),b[i]) - a.begin();
            long long cnt = a.size()-up;
            ans = ans*max((cnt-i),0ll)%(long long)(1e9+7);
        }
        cout<<ans<<endl;
    }
}