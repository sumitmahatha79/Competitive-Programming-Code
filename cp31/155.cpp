#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,q;
        cin>>n>>q;
        vector<int>a(n);
        vector<int>b(n);
        for(int i = 0;i<n;i++) cin>>a[i];
        for(int i = 0;i<n;i++) cin>>b[i];
        vector<vector<int>>qr(q,vector<int>(2));
        for(int i = 0;i<q;i++){
            cin>>qr[i][0];
            cin>>qr[i][1];
        }
        a[n-1] = max(a[n-1],b[n-1]);
        for(int i = n-2;i>=0;i--){
            a[i] = max({a[i+1],b[i],a[i]}); // yha pe a[i] likhna bhul gye the
        }
        vector<int>pre(n+1);
        pre[0] = 0;
        for(int i = 0;i<n;i++){
            pre[i+1] = a[i] + pre[i];
        }
        for(int i = 0;i<q;i++){
            int sum = pre[qr[i][1]] - pre[qr[i][0]-1];
            cout<<sum<<" ";
        }
        cout<<endl;
    }
}