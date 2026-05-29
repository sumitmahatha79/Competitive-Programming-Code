#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            long long a;
            cin>>a;
            v[i]=a;
        }
        sort(v.begin(),v.end());
        int a = v[0];
        if(a==2){
            cout<<3<<endl;
        }
        else if(a==1){
        cout<<2<<endl;
    }

        
    }
}