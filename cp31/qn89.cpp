#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        int cnt = 0;
        while(n!=1){
            if(n%6==0){
                n = n/6;
                cnt++;
            }
            else{
                n = n*2;
                cnt++;
                if(n%6!=0){
                    cnt = -1;
                    break;
                }
            }
        }
        cout<<cnt<<endl;
        
    }
}