#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b,c;
        cin>>a>>b>>c;
        bool ans = false;

        // when m is get multipled to a
        if(((2*b-c)/a)>0){
            if((2*b-c)%a==0){
                ans = true;
            }
        }

        // when m is get multipled to c
        if(((2*b-a)/c)>0){
            if((2*b-a)%c==0){
                ans=true;
            }
        }

        // when m is get multipled to b
        if((c-a)%2==0){
            if((a+c)/(2*b)>0){
                if(((a+c)/2)%b==0){
                   ans = true;
                }
            }
        }

        if(ans==true){
           cout<<"YES"<<endl;
        }
        else{
           cout<<"NO"<<endl;
        }

    }
}