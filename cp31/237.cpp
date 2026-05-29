#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        bool ok = true;
        for(int i = 1;i<n;i++){
            if(v[i]<v[i-1]){
                ok = false;
            }
        }
        if(k>=2){
            cout<<"YES"<<endl;
        }
        else{
            if(ok == true){
                cout<<"YES"<<endl;
            }
            else{
            cout<<"NO"<<endl;
            }
        }
    }
}