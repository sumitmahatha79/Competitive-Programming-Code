#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int x,n;
        cin>>x>>n;
        if(n%2==0){
            cout<<0<<endl;
        }
        else {
            cout<<x<<endl;
        }
    }
}