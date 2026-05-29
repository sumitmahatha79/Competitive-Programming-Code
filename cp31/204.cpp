#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int l,a,b;
        cin>>l>>a>>b;
        int ans = INT_MIN;
        for(int i = 1;i<=l;i++){
            int val = (a+i*b)%l;
            ans = max(val,ans);
        }
        cout<<ans<<endl;
    }
}