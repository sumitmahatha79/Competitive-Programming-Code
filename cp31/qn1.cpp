#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int j = 0;j<n;j++){
            cin>>v[j];
        }
        vector<long long>vc = v;
        sort(vc.begin(),vc.end());
        if(vc == v || k>1){
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}