#include<iostream>
#include<set>
using namespace std;

int main(){

    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        vector<int>b(n);
        for(int i = 0;i<n;i++)cin>>a[i];
        for(int i = 0;i<n;i++)cin>>b[i];
        vector<int>p(n);
        p[0] = b[0];
        for(int i = 1;i<n;i++){
            p[i] = max(b[i],p[i-1]);
        }
        int sum = 0;
        int maxi = 0;
        int ans = 0;
       // if(k<=n){
            for(int i = 0;i<min(k,n);i++){
                ans = (sum+a[i]+(k-i-1)*p[i]);
                maxi = max(maxi,ans);
                sum+=a[i];
            }
       // }
        // else{
        //     for(int i = 0;i<n;i++){
        //         ans = (sum+a[i]+(k-i-1)*p[i]);
        //         maxi = max(maxi,ans);
        //         sum+=a[i];
        //     }
        // }
        cout<<maxi<<endl;
    }
}