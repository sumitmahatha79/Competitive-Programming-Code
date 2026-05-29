#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long >v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }

        // prefix sum
        vector<long long>pre(n+1);
        pre[0] = 0;
        for(int i = 0;i<n;i++){
            pre[i+1] = pre[i] + v[i];
        }
        // n k sare factor nikal diye
        vector<int>fac;
        for(int i = 1;i*i<=n;i++){
            if(n%i==0){
                fac.push_back(i);
                if(i != n/i){// ye condition dete hai taki duplicate number na aajaye 
                    fac.push_back(n/i);
                }
            }
        }
        sort(fac.begin(),fac.end());

        long long ans = 0;
        for(int i = 0;i<fac.size();i++){
            long long maxi = LLONG_MIN;
            long long mini = LLONG_MAX;
            for(int j = 0;j<=(n-fac[i]);j+=fac[i]){
                long long val = pre[fac[i]+j] - pre[j];
                maxi = max(maxi,val);
                mini = min(mini,val);
            }
            long long cal = abs(maxi-mini);
            ans = max(ans,cal);
        }

      
        cout<<ans<<endl;// 10 6 3 3 2 1
    }
}