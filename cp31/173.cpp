#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,a;
        cin>>n>>a;
        vector<long long>v(n);
        int lf = 0;
        int rf = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            if(v[i]<a){
                lf++;
            }
            else if(v[i]>a){
                rf++;
            }
        }
        if(lf==rf){
            cout<<a+1<<endl;
        }
        else if(lf<rf){
            cout<<a+1<<endl;
        }
        else{
            cout<<a-1<<endl;
        }

    }
}