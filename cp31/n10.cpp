#include <iostream>
using namespace std;
typedef long long ll;
int main() {
    // ll t;
    // cin>>t;
    // for(int i=1;i<=t;i++){
    //     ll n,k;
    //     cin>>n>>k;
    //     string s;
    //     cin>>s;
    //     vector<ll>u;
    //     vector<pair<ll,ll>>p;
    //     for (int i=0;i<n;i++){
    //         if(s[i] == '(') {
    //             u.push_back(i);
    //         } 
    //         else{
    //             if(!u.empty()) {
    //                 p.push_back({u.back(),i});
    //                 u.pop_back();
    //             }
    //         }
    //     }
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<ll>u;
        vector<ll>m;
        for (int i =0;i<n;i++) {
            if(s[i]=='(') {
                u.push_back(i);
            } 
            else{
                if(!u.empty()) {
                    u.pop_back();
                    m.push_back(i);
                }
            }
        }
        string ans(n,'0');
        int d=min(k,(ll)m.size());
        for(int i =0;i<d;i++) {
            ans[m[i]] = '1';
        }
        cout<<ans<<endl;
    }
}
        // int j = 0;
        // int l = n-1;
        // int cnt = 0;
        // for(int i = 0;i<k;i++){
        //     if(s[i] == '2'){
        //         cnt++;
        //     }
        //     else if(s[i] == '0'){
        //         ans[j] = '-';
        //         j++;
        //     }
        //     else{
        //         ans[l] = '-';
        //         l--;
        //     }
        // }
        // int tnt = 0;
        // while(j<=l && cnt>0){
        //     if(ans[j] == '+' && ans[l] == '+'){
        //         if(j == l && tnt == 0){
        //             ans[j] = '-';
        //             j++;
        //             l--;
        //             cnt--;
        //         }
        //         else if((l-j+1)<=cnt && tnt == 0){
        //             for(int i = j;i<=l;i++){
        //                 ans[i] = '-';
        //             }
        //             break;
        //         }
        //         else{
        //         ans[j] = '?';
        //         tnt++;
        //         j++;
        //         ans[l] = '?';
        //         tnt++;
        //         l--;
        //         cnt--;
        //         }
        //     }
        // }
        // cout<<ans<<endl;
//         string ans(n,'0');
//         int l = min(k,(ll)p.size());
//         for (int i=0;i<l;i++) {
//             ans[p[i].first]='1';
//         }
//         cout<<ans<<endl;
//     }
// }