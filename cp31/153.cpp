#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,s,x;
        cin>>n>>s>>x;
        vector<int>v(n);
        int sum = 0;
        for(int i = 0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        int a = s-sum;
        if(a<0){
            cout<<"NO"<<endl;
        }
        else{
        if(a%x==0){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    }
}