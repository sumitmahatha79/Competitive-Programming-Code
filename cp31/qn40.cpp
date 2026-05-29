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
        int ev = 0;
        int od = 0;
        for(int i = 0;i<n-1;i++){
            if(v[i]%2!=0 && v[i+1]%2!=0){
                od++;
            }
            if(v[i]%2==0 && v[i+1]%2==0){
                ev++;
            }
        }
        cout<<ev+od<<endl;
    }
}