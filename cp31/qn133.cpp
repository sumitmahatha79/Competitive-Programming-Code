#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long s,k,m;
        cin>>s>>k>>m;
        long long sd = min(s,k);
        long long j = m%k;
        long long cnt = m/k;
        if(s<j){
            cout<<0<<endl;
        }
        else{
            if(k == sd && cnt%2==0){
                cout<<s-j<<endl;
            }
            else{
            cout<<sd-j<<endl;
            }
        }
        
    }
}
