#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            int g;
            cin>>g;
            v[i]=g;
        }
    }
}