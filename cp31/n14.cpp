#include <iostream>
#include<set>
using namespace std;
int main() {
    int t;
    cin >>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin >> n;
        vector<long long>a(n);
        for (int i=0;i<n;i++) {
            cin>>a[i];
        }
        vector<long long>v;
        for (long long x:a){
            long long c=x;
            while(!v.empty()&&v.back()>c) {
                c+= v.back();
                v.pop_back();
                // vector<long long>a(n);
                // vector<long long>b(n);
                // for (int i = 0; i < n; i++){
                // cin >> a[i];
            }
            v.push_back(c);
        }
        long long ans = 0;
        for (auto ele:v) {
            ans = max(ans,ele);
        }
        cout<<ans<<endl;
    }
}


        //  vector<int> a(n);
        // for(int i = 0;i<n;i++){
        //     cin>>a[i];
        // }
        // sort(a.begin(), a.end());
        // map<int,int>m;
        // for (int x:a) {
        //     m[x]++;
        // }
        // vector<int>v;
        // for (auto &[x,c] : m){
        //     v.push_back(x);
        // }
        // bool ok = false;
        // for (int i = 1; i < (int)v.size();i++) {
        //     if (v[i]-v[i-1]<=k) {
        //         ok = true;
        //     }
        // }
        // for (auto &[x,c]:m) {
        //     if (c%2 == 0)
        //         ok = true;
        // }
        // if(ok == true){
        //     cout<<"YES"<<endl;
        // }
        // else{
        //     cout<<"NO"<<endl;
        // }
//         for (int i = 0; i < n; i++){
//             cin >> b[i];
//         }
//         vector<int>p(n);
//         set<int>s;
//         for (int i = 1; i <= n; i++){
//             s.insert(i);
//         }
//         bool ok = true;
//         for (int i = 0;i<n;i++) {
//             int val = lower_bound(b.begin(),b.end(),a[i])-b.begin()+1;
//             if (val==n+1) {
//                 ok=false;
//                 break;
//             }
//             auto itr = s.lower_bound(val);
//             if (itr==s.end()) {
//                 ok =false;
//                 break;
//             }
//             p[i] = *itr;
//             s.erase(itr);
//         }
//         if(!ok) {
//             cout <<-1<<endl;
//             continue;
//         }
//         long long ans = 0;
//         for(int i=0;i<n;i++) {
//             for(int j=i+1;j<n;j++) {
//                 if(p[i]>p[j])ans++;
//             }
//         }
//         cout<<ans<<endl;
//     }
// }