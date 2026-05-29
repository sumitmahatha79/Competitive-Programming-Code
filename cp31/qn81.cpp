#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    mux t;
    cin>>t;
    for(mux i = 1;i<=t;i++){
        mux n;
        cin>>n;
        vector<mux>v(n);
        mux cntz = 0;
        mux cnto = 0;
        for(mux i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]==0){
                cntz++;
            }
            if(v[i]==1){
                cnto++;
            }
        }
        if(cnto == 0){
            cout<<0<<endl;
        }
        else{
            mux ans = 0;
            mux sq = 1;
            for(mux i = 1;i<=cntz;i++){
                sq = sq*2;;
            }
            ans = cnto*sq;
            cout<<ans<<endl;
            
        }
    }
}