#include<iostream>
using namespace std;
const int Mod = 1e9+7;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long ans = ((((n*(n+1)%Mod)*(4*n-1))%Mod)*337)%Mod;
        cout<<ans<<endl;
    }
}