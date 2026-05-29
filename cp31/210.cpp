#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        int noz = 0;
        int nom = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                noz++;
            }
            if(v[i]==(-1)){
                nom++;
            }
        }
        if(nom%2==0){
            cout<<noz<<endl;
        }
        else{
            cout<<noz+2<<endl;
        }
    }
}