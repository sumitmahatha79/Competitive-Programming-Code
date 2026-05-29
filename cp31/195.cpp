#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,m,d;
        cin>>n>>m>>d;
        int c = m+d;
        c = c/m;
        int ans = n/c;
        if(n%c != 0){
            cout<<ans+1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
}