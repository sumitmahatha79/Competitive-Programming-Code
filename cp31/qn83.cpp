#include<iostream>
using namespace std;
typedef long long mux;
int main(){
    mux t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        mux a,b;
        cin>>a>>b;
        if(a==b){
            cout<<0<<" "<<0<<endl;
        }
        else if(abs(a-b)==1){
           cout<<1<<" "<<0<<endl;
        }
        else if(a==0 || b==0){
            cout<<a+b<<" "<<0<<endl;
        }
        else{
            mux c = abs(a-b);
            mux e = a%c;
            mux f = b%c;
            mux g = 0;
            if(c%2==0){
                g = c/2;
            }
            else{
                g = (c/2)+1;
            }
            if(min(f,g)<g){
                cout<<c<<" "<<min(f,g)<<endl;
            }
            else{
            mux d = abs(c-(min(e,f)));
            cout<<c<<" "<<d<<endl;
            }
        }
    }
    
}