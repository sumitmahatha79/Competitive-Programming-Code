#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        int ans = INT_MIN;
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
            ans = max(ans,a);
        }
        cout<<ans<<endl;
    }
}