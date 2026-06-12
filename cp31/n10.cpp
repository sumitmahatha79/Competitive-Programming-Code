#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<long long>p(n+1,0);
        vector<long long>ss(n+1,0);
        for(int i = 0;i<n;i++){
            p[i+1] = p[i]+(s[i]=='(');
        }
        for(int i = n-1;i>=0;i--){
            ss[i] = ss[i+1]+(s[i]==')');
        }

// for (int i =0;i<n;i++) {
//             if(s[i]=='(') {
//                 u.push_back(i);
//             } 
//             else{
//                 if(!u.empty()) {
//                     u.pop_back();
//                     m.push_back(i);
//                 }
//             }
//         }
//         string ans(n,'0');
//         int d=min(k,(ll)m.size());
//         for(int i =0;i<d;i++) {
//             ans[m[i]] = '1';
//         }
//         cout<<ans<<endl;
//     }


        long long o = 1e18;
        long long pp = -1;
        for(int i = 0;i<=n;i++){
            if(p[i]+ss[i]<o){
                o = p[i]+ss[i];
                pp = i;
            }
        }

        vector<long long>y;
        for(int i = 0;i<pp;i++){
            if(s[i] == '('){
                y.push_back(i);
            }
        }
        for(int i = pp;i<n;i++){
            if(s[i] == ')'){
                y.push_back(i);
            }
        }
        string sst(n,'0');
        long long tk = min((long long)y.size(),k);
        for(int i = 0;i<tk;i++){
            sst[y[i]] = '1';
        }
        cout<<sst<<endl;
    }
}