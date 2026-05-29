#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k;
        cin>>n>>k;
        vector<long long>v(n);
        for(int i = 0;i<n;i++)cin>>v[i];

        map<long long,long long>m;
        for(int i = 0;i<n;i++){
            long long val = v[i]-k;
            m[val] = 1;
        }
        for(int i = 0;i<n;i++){
            if(m[v[i]]==1){
            m[v[i]]++;
            }
        }

        bool ok = false;
        for(auto ele : m){
            int ans = ele.second;
            if(ans>1){
                ok = true;
                break;
            }
        }

        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}