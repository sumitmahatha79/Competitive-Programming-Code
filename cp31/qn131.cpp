#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long x,y,z;
        cin>>x>>y>>z;
        long long di = y*z + z - 1;
        long long bi = x - 1;
        long long ans = di/bi;
        
        if(di%bi!=0){
            ans+=1;
        }
        cout<<ans+z<<endl;

    }
}