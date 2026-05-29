#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long x,y;
        cin>>x>>y;

        if(y<=x){
            cout<<"YES"<<endl;
        }
        else{
            if(x == 1){
                if(y==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else if(x<=3){
                if(y<=3){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }

}