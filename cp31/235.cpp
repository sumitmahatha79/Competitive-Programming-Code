#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,m;
        cin>>n>>m;
        if(n == 1){
            cout<<0<<endl;
        }
        else if(n == 2){
            cout<<m<<endl;
        }
        else{

            cout<<(2*m)<<endl;
        }
    }
}