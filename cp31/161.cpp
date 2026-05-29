#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        long long lo = 0;
        long long hi = 1e12;
        long long ans = -1;
        while(lo<=hi){
            long long mid = (lo+hi)/2;
            long long wat = 0;
            for(int i = 0;i<n;i++){
                if(mid>v[i]){
                    wat += (mid-v[i]);
                }
            }
            if(wat<=x){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        cout<<ans<<endl;
    }
}