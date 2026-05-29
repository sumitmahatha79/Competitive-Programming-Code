#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long a,b;
        cin>>a>>b;
        int opr = 0;
        if(b>a && b%2!=0){
            cout<<(-1)<<endl;
        }
        else if(a>b && a%2!=0){
            cout<<(-1)<<endl;
        }
        else if(a == b){
            cout<<(0)<<endl;
        }
        else if(a>b){
            while(a>b){
            if(a%8==0 && (a/8)>=b){
                opr++;
                a/=8;
            }
            else if(a%4==0 && (a/4)>=b){
                opr++;
                a/=4;
            }
            else if(a%2==0 && a/2 >=b){
                opr++;
                a/=2;
            }
            else{
                opr = (-1);
                break;
            }
        }
        cout<<opr<<endl;
    }
        else if(a<b){
            while(a<b){
            if((a*8)<=b){
                opr++;
                a*=8;
            }
            else if((a*4)<=b){
                opr++;
                a*=4;
            }
            else if(a*2<=b){
                opr++;
                a*=2;
            }
            else{
                opr = (-1);
                break;
            }
            }
            cout<<opr<<endl;
        }
    }
}