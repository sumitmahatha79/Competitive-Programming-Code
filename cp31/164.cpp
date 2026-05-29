#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        long long n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<vector<long long>>v(n,vector<long long>(2));
        for(int i = 0;i<n;i++){
            cin>>v[i][0];
            cin>>v[i][1];
        }
        if(a<=k && b<=k){
            cout<<0<<endl;
        }
        else{
        long long ans1 = abs(v[a-1][0]-v[b-1][0])+abs(v[a-1][1]-v[b-1][1]);
        long long hans2 = LLONG_MAX/10;
        if(a<=k){
            hans2 = 0;
        }
        else{
            for(int i = 0;i<k;i++){
                long long an = abs(v[i][0]-v[a-1][0])+abs(v[i][1]-v[a-1][1]);
                hans2 = min(an,hans2);
            }
        }

        long long hans1 = LLONG_MAX/10;
        if(b<=k){
            hans1 = 0;
        }
        else{
            for(int i = 0;i<k;i++){
                long long an = abs(v[i][0]-v[b-1][0])+abs(v[i][1]-v[b-1][1]);
                hans1 = min(an,hans1);
            }
        }
        long long ans2 = hans1+hans2;
        cout<<min(ans1,ans2)<<endl;
        
    }
        
    }
}