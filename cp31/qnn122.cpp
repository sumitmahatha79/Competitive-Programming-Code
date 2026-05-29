#include<iostream>
using namespace std;
typedef long long ll;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        ll x;
        cin>>x;
        bool f = false;
        for(int i = 0;i<n-1;i++){
            if(min(v[i],v[i+1])<=x && x<=max(v[i],v[i+1])){
                f = true;
                break;
            }

        }
        if(n==1 && v[0]==x){
            cout<<"YES"<<endl;
        }
        else if(f == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}