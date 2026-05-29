#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 1;i<=t;i++){
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i = 0;i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int maxi = 1;
        int a = 1;
        for(int i = 1;i<n;i++){
            if(v[i]==v[i-1]){
                a++;
                maxi = max(maxi,a);
            }
            else{
                a = 1;
            }
        }
        int ans = n-maxi;
            int cnt = 0;
            int cn = maxi;
            while(cn<n){
                cn*=2;
                cnt++;
                if(cn>=n){
                    break;
                }
            }
            cout<<ans+cnt<<"\n";
        


    }
}