#include<iostream>
using namespace std;
void solve(){
    int n;
    cin>>n;
    int v = n%7;
    int n1 = n+(7-v);
    int n2 = n-v;
    int c1 = (n/10)%10;
    int c2 = (n1/10)%10;
    int c3 = (n2/10)%10;

    if(c1==c2 && c1 == c3){
        cout<<min(n2,n1)<<endl;
    }
    else if(c1 == c2){
        cout<<n1<<endl;
    }
    else{
        cout<<n2<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        solve();
    }
}