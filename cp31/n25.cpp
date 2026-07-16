#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        for(int i = 0;i<(n-1);i++){
            if(v[i]>(i+1)){
                v[i+1]+=(v[i]-(i+1));
                v[i] = i+1;
            }
        }
        bool ok = true;
        for(int i = 0;i<(n-1);i++){
            if(v[i]>=v[i+1]){
                ok = false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}