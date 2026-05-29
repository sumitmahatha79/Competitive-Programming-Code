#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        int j = n%3;
        if(j==0){
            cout<<0<<endl;
        }
        else{
        cout<<(3-j)<<endl;
        }
    }
}