#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    mux t;
    cin>>t;
    for(mux i = 1;i<=t;i++){
        mux n,k;
        cin>>n>>k;
        mux m = n*k;
        vector<mux>v(m);
        for(mux i = 0;i<m;i++){
            cin>>v[i];
        }
        reverse(v.begin(),v.end());
        mux me;
        if(n%2==0){
            me = n/2;
        }
        else{
            me = (n/2)+1;
        }
        mux sum = 0;
        mux j = 1;
        while(j<=k){
            mux l = (n - me)+1;
            sum += v[(l*j)-1];
            j++;
        }
        cout<<sum<<endl;

    }
}