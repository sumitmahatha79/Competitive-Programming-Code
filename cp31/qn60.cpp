#include<iostream>
using namespace std;
typedef long long mac;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        mac n,k,x;
        cin>>n>>k>>x;
        mac min_sum = (k*(k+1))/2;
        mac max_sum = (k*(2*n+((k-1)*-1)))/2;
        
        if(min_sum <= x && x<=max_sum){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }

    }
}