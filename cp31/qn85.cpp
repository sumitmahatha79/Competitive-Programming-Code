#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        bool flag = false;
        if(n%2!=0){
            cout<<"YES"<<endl;
        }
        else{
            while(n>3){
                n = n/2;
                if(n%2!=0){
                    flag = true;
                    break;
                }
            }
            if(flag==true){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}