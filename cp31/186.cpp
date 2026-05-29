#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,l,r;
        cin>>n>>l>>r;
        if((r-l+1)<l){
            cout<<"NO"<<endl;
        }
        else{
            vector<long long>v(n);
            for(int i = 0;i<n;i++){
                v[i] = i+l;
            }
            cout<<"YES"<<endl;
            for(int i = 0;i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }
    }
}