#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        c-=a;
        d-=b;
        int u = (max(a,b));
        int v = (max(c,d));
        if(u%2 != 0)u++;
        if(v%2 != 0)v++;

        u/=2;
        v/=2;
        u--;
        v--;

        if(min(a,b) >= u && min(c,d) >= v){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        
    }
}