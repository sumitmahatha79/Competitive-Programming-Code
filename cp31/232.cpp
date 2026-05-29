/*
        ॐ श्रीकृष्णाय नमः ॐ
        ----------------------------------------
        |      Author: Sumit Mahatha        |
        ----------------------------------------
*/
#include<iostream>
using namespace std;
typedef long long ll;
int main(){
        int t;
        cin>>t;
        for(int i = 1;i<=t;i++){
            ll n;
    cin>>n;
    vector<ll>arr(n);
    for(ll i=0;i<n;i++){
        cin>>arr[i];
    }
    ll s=0,ne=0;
    bool ok = true;
    for(ll i=0;i<n;i++){
        ne+=i;
        s+=arr[i];
        if(s<ne){
            ok = false;
            break;
        }
    }
    if(ok == false){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
    }
}