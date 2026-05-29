#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        int maxi = INT_MIN;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            maxi = max(maxi,v[i]);
        }
        cout<<n*maxi<<endl;
    }
}