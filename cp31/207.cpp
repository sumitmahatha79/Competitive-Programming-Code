#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int k,x;
        cin>>k>>x;

        while(k>0){
            if((x-1)%3==0 && (x-1)!=0){
                if(((x-1)/3)%2!=0){
                x--;
                x/=3;
                }
                else{
                    x*=2;
                }
            }
            else{
                x*=2;
            }

            k--;
        }
        cout<<x<<endl;

    }
}