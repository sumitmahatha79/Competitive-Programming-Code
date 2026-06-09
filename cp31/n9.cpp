#include <iostream>
using namespace std;
int main() {
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
//         vector<int>v;
//         for (int i=1;i<=n;i++) {
//             v.push_back(i);
//             v.push_back(i);
//         }
//         for (int i=1;i<=n;i++) {
//             v.push_back(i);
//             v.push_back(i);
//         }
//         // string ans(n,'+');
//         // int j = 0;
//         // int l = n-1;
//         // int cnt = 0;
//         // for(int i = 0;i<k;i++){
//         //     if(s[i] == '2'){
//         //         cnt++;
//         //     }
//         //     else if(s[i] == '0'){
//         //         ans[j] = '-';
//         //         j++;
//         //     }
//         //     else{
        vector<int>ans;
        int s=1;
        if (n%2==1) {
            vector<int>b = {
                1,1,2,1,2,3,1,3,2,2,3,3
            };
            for (int x:b)
                ans.push_back(x);
            s = 4;
        }
        int m=n-s+1;
        if (m>0) {
            vector<int>v;
            for (int i=s;i<=n;i++)
                v.push_back(i);
            for (int i = n; i >=s;i--)
                v.push_back(i);
            for (int i=s;i<=n;i++)
                v.push_back(i);
            for (int i=s;i<=n;i++)
                v.push_back(i);
            for (int i = 0;i<v.size();i++){
                ans.push_back(v[i]);
            }
        }
        for(int i = 0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout <<endl;
    }
}


//         //         ans[l] = '-';
//         //         l--;
//         //     }
//         // }
//         // int tnt = 0;
//         // while(j<=l && cnt>0){
//         //     if(ans[j] == '+' && ans[l] == '+'){
//         //         if(j == l && tnt == 0){
//         //             ans[j] = '-';
//         //             j++;
//         //             l--;
//         //             cnt--;
//         //         }
//         //         else if((l-j+1)<=cnt && tnt == 0){
//         //             for(int i = j;i<=l;i++){
//         //                 ans[i] = '-';
//         //             }
//         //             break;
//         //         }
//         //         else{
//         //         ans[j] = '?';
//         //         tnt++;
//         //         j++;
//         //         ans[l] = '?';
//         //         tnt++;
//         //         l--;
//         //         cnt--;
//         //         }
//         //     }
//         for (int i=2*n;i+1<4*n;i+=2) {
//             swap(v[i],v[i+1]);
//         }
//         for(int i = 0;i<v.size();i++){
//             cout<<v[i]<<" ";
//         }
//         cout<<endl;
//     }
// }