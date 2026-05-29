#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        bool ok = false;
        bool uk = false;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i] == 67){
                ok = true;
            }
            if(v[i] == 1){
                uk = true;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}