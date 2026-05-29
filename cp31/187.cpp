#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        int ans = -1;

        for(int i = 0; i < n; i++){
            if(v[i] != i){
                if(ans == -1) ans = v[i];
                else ans &= v[i];
            }
        }
        cout<<ans<<endl;
    }
}