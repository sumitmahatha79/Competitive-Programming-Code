#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        if(n%2020 == 0 || n%2021 == 0){
            cout<<"YES"<<endl;
        }
        else {
            int val = n/2020;
            int cal = n%2020;
            if(val>=cal){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}