#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];
        sort(v.rbegin(),v.rend());
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}