#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long  x,n;
        cin>>x>>n;
        long long ans = 0;
        if(n%4==0){
            ans = 0;
        }
        else if(n%4==1){
            ans = (-n);
        }
        else if(n%4==2){
            ans = 1;
        }
        else if(n%4==3) {
            ans = n+1;
        }
        
        if(x%2==0){
            ans = x + ans;
        }
        else{
            ans = x - ans;
        }
        cout<<ans<<endl;
    }


}