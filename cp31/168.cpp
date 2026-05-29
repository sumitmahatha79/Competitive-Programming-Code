#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.rbegin(),v.rend());
        long long sum = 0;
        vector<long long>pre(n+1,0);    
        for(int i = 1;i<=n;i++){
            pre[i] = pre[i-1]+v[i-1];
            sum += v[i-1];
        }

        long long ans = INT_MIN;
        for(int i = 1;i<=k;i++){
            long long val1 = pre[n] - pre[n-(2*i)]; // 10 6 5 2 1
            long long val2 = pre[k-i];

            long long val3 = pre[i];
            long long val4 = pre[n]-pre[n-(2*(k-i))];

            long long finval = min((val1+val2),(val3+val4));
            ans = max(ans,(sum-(finval)));
        }
        cout<<ans<<endl;
    }
}