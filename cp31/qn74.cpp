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
        if(n!=1){
        for(int i = n-1;i>0;i--){
            if(v[i-1]>=v[i]){
                while(v[i-1]>=v[i]){
                    v[i-1]=(v[i-1]/2);
                    cnt++;
                    if(v[i]==0 && v[i-1]==0){
                        cnt = -1;
                        break;
                    }
                }
            }
        }
    }
    cout<<cnt<<endl;
    }
}