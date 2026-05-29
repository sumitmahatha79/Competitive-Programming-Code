#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        ll n,d;
        cin>>n>>d;
        vector<ll>v(n);
        for(ll i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        bool flag = true;
        if(n==1){
            flag = true;
        }
       else if(n%2==0){
        for(int i = 0;i<n-1;i+=2){
            if(abs(v[i]-v[i+1])>d){
                flag = false;
                break;
            }
        }
       }
       else{
        if(abs(v[n-1]-v[n-2])>abs(v[0]-v[1])){
        for(int i = 0;i<n-2;i+=2){
            if(abs(v[i]-v[i+1])>d){
                flag = false;
                break;
            }
        }
       }
       else{
        for(int i = 1;i<n-1;i+=2){
            if(abs(v[i]-v[i+1])>d){
                flag = false;
                break;
            }
       }
    }
    }
    if(flag == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
}
}