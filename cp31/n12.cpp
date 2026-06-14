#include <iostream>
#include<map>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(int i = 0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(), a.end());
        map<int,int>m;
        for (int x:a) {
            m[x]++;
        }
        vector<int>v;
        for (auto &[x,c] : m){
            v.push_back(x);
        }
        bool ok = false;
        for (int i = 1; i < (int)v.size();i++) {
            if (v[i]-v[i-1]<=k) {
                ok = true;
            }
        }
        for (auto &[x,c]:m) {
            if (c%2 == 0)
                ok = true;
        }
        if(ok == true){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}