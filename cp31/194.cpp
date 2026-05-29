#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        long long sum = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        
    }
}