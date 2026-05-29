#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        mux n;
        cin>>n;
        vector<mux>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        mux ans = v[0];
        for(int i = 1;i<n;i++){
            ans = ans&v[i];
        }
        cout<<ans<<endl;
    }
}