#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
       long long n,x,y;
       cin>>n>>x>>y;
       vector<long long>v(n);
       for(int i = 0;i<n;i++)cin>>v[i];
       //sort(v.begin(),v.end());
       int idx = -1;
       long long sum = 0;
       long long rem = INT_MIN;
       for(int i = 0;i<n;i++){
            
                long long val = v[i]%x;
                rem = max(rem,val);

                // if(val == rem){
                //     sum = max(v[i],sum);
                //     if(v[i]==sum){
                //     idx = i;
                //     }
                // }
            
       }
       int che = 1;
       for(int i = 0;i<n;i++){
            // if(i == idx){
            //     continue;
            // }
            if(v[i]%x == rem && che == 1){
                sum += max(v[i],sum);
                che = -1;
            }
            else{
                long long di = v[i]/x;
                long long ans = di*y;
                sum += ans;
            }
       }
       cout<<sum<<endl;
    }
}