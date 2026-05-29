#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n;
        cin>>n;
        n--;
        ll msb = log2(n);
        ll val = pow(2,msb);
        vector<ll>v;
        for(int i = val-1;i>=0;i--){
            v.push_back(i);
        }
        for(int i = val;i<=n;i++){
            v.push_back(i);
        }
        for(int i = 0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}