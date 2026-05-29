#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            int a;
            cin>>a;
            v[i]=a;
        }
        vector<int>u(n);
        for(int i = 0;i<n;i++){
            int a = n-v[i];
            u[i]=a+1;
            cout<<u[i]<<" ";
        }
        cout<<endl;

    }
}