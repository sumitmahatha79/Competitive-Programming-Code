#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        bool f = true;
        for(int i = 0;i<n-1;i++){
            if(i%2!=0){
                if(v[i] != v[i+1]){
                    f = false;
                    break;
                }
            }
        }
        if(f == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}