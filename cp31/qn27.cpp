#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        if(n<10){

            cout<<n<<endl;
        }
        
        else if(10<=n && n<=100){
            int cnt = 0;
            cnt+=9;
            int k = n/10;
            cnt+=k;
            cout<<cnt<<endl;

        }
        else if(100<=n && n<1000){
            int cnt = 0;
            cnt+=9;
            cnt+=9;
            int k = n/100;
            cnt+=k;
            cout<<cnt<<endl;

        }else if(1000<=n && n<10000){
            int cnt = 0;
            cnt+=9;
            cnt+=18;
            int k = n/1000;
            cnt+=k;
            cout<<cnt<<endl;

        }else if(10000<=n && n<100000){
            int cnt = 0;
            cnt+=9;
            cnt+=27;
            int k = n/10000;
            cnt+=k;
            cout<<cnt<<endl;

        }
        else if(100000<=n && n<1000000){
            int cnt = 0;
            cnt+=9;
            cnt+=36;
            int k = n/100000;
            cnt+=k;
            cout<<cnt<<endl;

        }
    }
}