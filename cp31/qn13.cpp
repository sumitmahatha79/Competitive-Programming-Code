#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int j = 0;j<n;j++){
            int a;
            cin>>a;
            v[j]=a;
        }
        if(v[0]==1){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}