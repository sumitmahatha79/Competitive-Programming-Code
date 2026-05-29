#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long hoa = 0;
        while(n>=3){
            if(n%3==0){
                long long c = n/3;
                hoa+=c;
                n = c;
            }
            else if(n%3==1){
                long long c = (n+2)/3;
                hoa+=(c-1);
                n = c;
            }
            else if(n%3==2){
                long long c = (n+1)/3;
                hoa+=(c-1);
                n = n-2*(c-1);
            }
        }
        cout<<hoa<<endl;
    }
    
}
