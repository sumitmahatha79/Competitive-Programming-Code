#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"Yes"<<endl;
        }
        else if(n%k==0){
            cout<<"Yes"<<endl;
        }
        else {
        

        long long c = n-k;
        if(c%2==0){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }

    }

        
    }
}