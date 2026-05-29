#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        int val = v[0];
        for(int i = 0;i<n;i+=2){
           // val = gcd(val,v[i]);
        }

        int ual = v[1];
        for(int i = 1;i<n;i++){
            // ual = gcd(ual,v[i]); 
        }

        int ch = 1;
        for(int i = 0;i<n;i+=2){
            if(v[i]%ual == 0){
                ch = 0;
                break;
            }
        }
        int bh = 1;
        for(int i = 1;i<n;i+=2){
            if(v[i]%val == 0){
                bh = 0;
                break;
            }
        }

        if(bh == 1){
            cout<<val<<endl;
        }
        else if(ch == 1){
            cout<<ual<<endl;
        }
        else{
            cout<<0<<endl;;
        }



    }
}