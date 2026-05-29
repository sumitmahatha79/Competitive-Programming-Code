#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n,r,b;
        cin>>n>>r>>b;
        int re = r%(b+1);
        int q = r/(b+1);
        string s;
        for(int i = 0;i<q;i++){
            s+='R';
        }
        vector<string>v(b+1,"");
        for(int i = 0;i<(b+1);i++){
            v[i] = s;
        }
        for(int i = 0;i<re;i++){
            v[i] +='R';
        }
        string ans;
        for(int i = 0;i<b;i++){
            ans += v[i];
            ans += 'B';
        }
        ans +=v[b];
        cout<<ans<<endl;
    }
}