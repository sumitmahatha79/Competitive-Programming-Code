#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        int ev=0;
        int od=0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]%2==0){
                ev++;
            }
            else{
                od++;
            }
        }
        if(ev==n){
            cout<<"YES"<<endl;
        }
        else if(od==n){
            if(n%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            if(od%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }

    }
}