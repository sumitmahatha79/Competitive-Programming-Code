#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        vector<long long>v(n+1);
        for(int i = 1;i<=n;i++) cin>>v[i];

       
        int k = n/2;
        for(int i = 1;i<=(k);i++){
            if(v[i]>v[2*i]){
                int a = v[2*i];
                v[2*i] = v[i];
                v[i] = a;
            }
        }
        bool ok = true;
        for(int i = 1;i<n;i++){
            if(v[i]>v[i+1]){
                ok = false;
                break;
            }
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}