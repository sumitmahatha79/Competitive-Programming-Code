#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long x,y;
        cin>>x>>y;
        if(x<=abs(y)){
            cout<<"NO"<<endl;
        }
        else{
            if(y<0){
                int a = 4*abs(y);
                int v = x-a;
                if(v%3==0 && v>=0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                int a = 2*y;
                int v = x - a;
                if(v%3==0 && v>=0){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}