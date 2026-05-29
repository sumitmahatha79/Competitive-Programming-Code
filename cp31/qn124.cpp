#include<iostream>
using namespace std;
int xorr(int n){
    if(n%4==0){
        return n;
    }
    else if(n%4==1){
        return 1;
    }
    else if(n%4==2){
        return n+1;
    }
    else{
        return 0;
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b;
        cin>>a>>b;
        int k = a-1;
        int x = xorr(k);
        int y = x^b;
        if(x == b){
            cout<<a<<endl;
        }
        else if(y == a){
            cout<<a+2<<endl;
        }
        else {
        cout<<a+1<<endl;
        }

    }
}