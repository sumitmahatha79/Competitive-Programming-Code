#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll n,d;
    cin>>n>>d;
    vector<ll>v(n);
    for(int i = 0;i<n;i++){
        cin>>v[i];
    }
    sort(v.rbegin(),v.rend());
    int k = n;
    int cnt = 0;
    for(int i = 0;i<n;i++){
        int a = (d/v[i])+1;
        if(a<=k){
            k-=a;
            cnt++;
        }
        else{
            break;
        }
    }
    cout<<cnt;
}