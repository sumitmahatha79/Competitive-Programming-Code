#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n;
        cin>>n;
        long long le = (n*(n-1))/2;
        vector<long long>v(le);
        for(int i = 0;i<le;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        vector<long long>ans;
        long long c = 0;
        long long b = n;
        for(int i = 1;i<n;i++){
            ans.push_back(v[c]);
            b--;
            c+=b;
            
        }
        ans.push_back(v[le-1]);

        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}