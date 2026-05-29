#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    ll t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll w,h;
        cin>>w>>h;
        vector<ll>h1;
        vector<ll>h2;
        vector<ll>v1;
        vector<ll>v2;

        ll k1;
        cin>>k1;
        for(int i = 0;i<k1;i++){
            ll a;
            cin>>a;
            h1.push_back(a);
        }
        ll b1 = h1[k1-1] - h1[0]; 
        ll area = b1*h;

        ll k2;
        cin>>k2;
        for(int i = 0;i<k2;i++){
            ll a;
            cin>>a;
            h2.push_back(a);
        }
        ll b2 = h2[k2-1] - h2[0]; 
        area = max(area,b2*h);

        ll k3;
        cin>>k3;
        for(int i = 0;i<k3;i++){
            ll a;
            cin>>a;
            v1.push_back(a);
        }
        ll b3 = v1[k3-1] - v1[0]; 
        area = max(area,b3*w);

        ll k4;
        cin>>k4;
        for(int i = 0;i<k4;i++){
            ll a;
            cin>>a;
            v2.push_back(a);
        }
        ll b4 = v2[k4-1] - v2[0]; 
        area = max(area,b4*w);

        cout<<area<<endl;
    }
}