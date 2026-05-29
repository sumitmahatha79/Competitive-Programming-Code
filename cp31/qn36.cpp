#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;

        long long aa = c-a;
        long long bb = b+aa;
        if(c<a && d<b){
            cout<<-1<<endl;
        }
        else if(bb>d){
            cout<<-1<<endl;
        }
        else {
            int ans = d-b;
            a+=ans;
            int bns = a-c;
            ans+=bns;
            cout<<ans<<endl;
        }
        
    }
}