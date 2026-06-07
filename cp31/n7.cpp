// #include<iostream>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     for(int i = 1;i<=t;i++){
//         int n;
//         cin>>n;
//         vector<long long>v(n);
//         for(int i = 0;i<n;i++){
//             cin>>v[i];
//         }
//         sort(v.rbegin(),v.rend());
//         bool ok = true;
//         for(int i = 2;i<n;i++){
//             if(v[i-2]%v[i-1] != v[i]){
//                 ok = false;
//                 break;
//             }
//         }
//         if(ok == true){
//             cout<<v[0]<<" "<<v[1]<<endl;
//         }
//         else{
//             cout<<-1<<endl;
//         }
//     }
// }

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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<ll> h(n);
        for (int i = 0; i < n; i++) cin >> h[i];

        for (int i = 0; i < n; i++) {
            ll total = 0;
            vector<ll> water(n, 0);

            // Go RIGHT from i: connection between j and j+1 is h[j]
            // h[i] is connection between i and i+1 (right neighbor)
            ll minH = LLONG_MAX;
            for (int step = 1; step < n; step++) {
                int conn = (i + step - 1) % n; // connection index going right
                minH = min(minH, h[conn]);
                int j = (i + step) % n;
                water[j] = minH;
            }

            // Go LEFT from i: connection between j-1 and j is h[j-1]
            // h[i-1] is connection between i-1 and i (left neighbor)
            minH = LLONG_MAX;
            for (int step = 1; step < n; step++) {
                int conn = (i - step + n) % n; // connection index going left
                minH = min(minH, h[conn]);
                int j = (i - step + n) % n;
                water[j] = max(water[j], minH); // take better of left/right
            }

            for (int j = 0; j < n; j++) total += water[j];
            cout << total;
            if (i < n - 1) cout << " ";
        }
        cout << "\n";
    }
}
// #include <iostream>
// using namespace std;
// int main() {
//     vector<long long>v= {0,1,2,3,4,5,6,7,8,9,22,11};
//     int t;
//     cin >> t;
//     for(int i = 1;i<=t;i++) {
//         long long n;
//         cin >> n;
//         long long p = v[n % 12];
//         long long b=n-p;
//         if (b < 0) {
//             cout<<-1<<endl;
//         } 
//         else {
//             cout<<p<<" "<<b<<endl;
//         }
//     }
// }