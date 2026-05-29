#include<iostream>
using namespace std;
int main (){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        if(v[0]==1){
            v[0]++;
        }
        for(int i = 1;i<n;i++){
            if(v[i]==1){
                v[i]++;
            }
        //     if(v[i]%2==0 && v[i-1]%2 != 0){
        //         continue;
        //     }
        //    else if(v[i-1]%2==0 && v[i]%2 != 0){
        //         continue;
        //     }
            if(v[i]%v[i-1]!=0){
                continue;
            }
            else{
                v[i]++;
            }
        }
        for(int i = 0;i<n;i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }

}