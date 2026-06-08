// #include <iostream>
// using namespace std;
// using ll = long long;
// int main() {
//     int t;
//     cin>>t;
//     for(int i = 1;i<=t;i++){
//         int n;
//         cin>>n;
//         vector<ll>v(n);
//         for (int i = 0; i < n; i++) {
//             cin >> v[i];
//         }
//         vector<ll>ans(n);
//         vector<ll>p(n);
//         vector<ll>dp(n);
//         for (int k = 0; k < n; k++) {
//             for (int i=0;i<n;i++) {
//                 p[i]=v[(k+i)%n];
//             }
//             int m=n-1;
//             for (int i=0;i<=m;i++) {
//                 dp[i] = 0;
//             }
//             for (int i=1;i<=m;i++) {
//                 ll gg = 0;
//                 for (int j=0;j<i;j++) {
//                     ll len = i - j;
//                     ll val = min(p[j], p[i]);
//                     gg = max(gg,dp[j] + len * val);
//                 }
//                 dp[i] = gg;
//             }
//             ans[k] = dp[m];
//         }
//         for(int i = 0;i<ans.size();i++) {
//             cout <<ans[i]<<" ";
//         }
//         cout <<endl;
//     }
// }

#include <iostream>
using namespace std;
using ll = long long;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<ll> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<ll> a(2*n);
        for (int i = 0; i < n; i++) {
            a[i]=v[i];
            a[i+n]=v[i];
        }
        vector<ll> ans(n);
        for (int k = 0; k < n; k++) {
            vector<ll> dp(n, 0);
            for (int i = 1; i < n; i++) {
                ll p = 0;
                for (int j = 0; j < i; j++) {
                    ll l = i - j;
                    ll u = min(a[k + j], a[k + i]);
                    p = max(p, dp[j]+l*u);
                }
                dp[i] = p;
            }
            ans[k] = dp[n - 1];
        }
        for (int i = 0;i<ans.size();i++) {
            cout <<ans[i]<< " ";
        }
        cout <<endl;
    }
}