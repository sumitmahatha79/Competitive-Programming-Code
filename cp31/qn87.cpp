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
        cin>>v[i];
       } 
       int cnt = 0;

       for(int i = 0;i<n-1;i++){
        if(v[i]>v[i+1]){
            cnt++;
            v[i+1]=v[i];
        }
       }
    //    bool flag = true;
    //    while(true){
    //    for(int i = n-1;i>0;i--){
    //     if(v[i-1]>v[i]){
    //         cnt++;
    //         v[i]=v[i-1];
    //     }
    //    }
    //    int a = 0;
    //    for(int i = 0;i<n-1;i++){
    //     if(v[i]>v[i+1]){
    //         a = 1;
    //     }
    //    }
    //    if(a==0){
    //     break;
    //    }
    // }
       cout<<cnt<<endl;
    }
}